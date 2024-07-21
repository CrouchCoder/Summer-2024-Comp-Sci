#include <iostream>
#include <fstream>

const int MAX_TASKS = 100;
const int MAX_TASK_LENGTH = 100;

char tasks[MAX_TASKS][MAX_TASK_LENGTH];
int numTasks = 0;

// Function prototypes
void displayMenu();
void addTask();
void displayTasks();
void removeTask();
void markTaskComplete();
void saveTasksToFile();
void loadTasksFromFile();

int main() {
    char choice;

    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore();

        switch(choice) {
            case '1': addTask(); break;
            case '2': displayTasks(); break;
            case '3': removeTask(); break;
            case '4': markTaskComplete(); break;
            case '5': saveTasksToFile(); break;
            case '6': loadTasksFromFile(); break;
            case '7': std::cout << "Exiting program...\n"; break;
            default: std::cout << "Invalid choice. Please try again.\n"; break;
        }
    } while(choice != '7');

    return 0;
}

void displayMenu() {
    std::cout << "\n==== To-Do List Manager ====\n"
              << "1. Add Task\n"
              << "2. Display Tasks\n"
              << "3. Remove Task\n"
              << "4. Mark Task as Complete\n"
              << "5. Save Tasks to File\n"
              << "6. Load Tasks from File\n"
              << "7. Exit\n"
              << "Enter your choice: ";
}

void addTask() {
    if (numTasks < MAX_TASKS) {
        std::cout << "Enter task: ";
        std::cin.getline(tasks[numTasks++], MAX_TASK_LENGTH);
    } else {
        std::cout << "Task list is full. Cannot add more tasks.\n";
    }
}

void displayTasks() {
    if (numTasks == 0) {
        std::cout << "No tasks to display.\n";
    } else {
        std::cout << "\nTasks:\n";
        for (int i = 0; i < numTasks; ++i) {
            std::cout << i + 1 << ". " << tasks[i] << "\n";
        }
    }
}

void removeTask() {
    if (numTasks == 0) {
        std::cout << "No tasks to remove.\n";
        return;
    }

    int index;
    std::cout << "Enter index of task to remove (1-" << numTasks << "): ";
    std::cin >> index;

    if (index < 1 || index > numTasks) {
        std::cout << "Invalid index.\n";
    } else {
        for (int i = index - 1; i < numTasks - 1; ++i) {
            for (int j = 0; j < MAX_TASK_LENGTH; ++j) {
                tasks[i][j] = tasks[i + 1][j];
                if (tasks[i][j] == '\0') break; // Stop copying at null terminator
            }
        }
        numTasks--;
        std::cout << "Task removed.\n";
    }
}

void markTaskComplete() {
    if (numTasks == 0) {
        std::cout << "No tasks to mark as complete.\n";
        return;
    }

    int index;
    std::cout << "Enter index of task to mark as complete (1-" << numTasks << "): ";
    std::cin >> index;

    if (index < 1 || index > numTasks) {
        std::cout << "Invalid index.\n";
    } else {
        std::cout << "Task \"" << tasks[index - 1] << "\" marked as complete.\n";
    }
}

void saveTasksToFile() {
    std::ofstream outfile("tasks.txt");
    if (!outfile) {
        std::cout << "Error opening file.\n";
        return;
    }

    for (int i = 0; i < numTasks; ++i) {
        outfile << tasks[i] << "\n";
    }
    std::cout << "Tasks saved to file.\n";
    outfile.close();
}

void loadTasksFromFile() {
    std::ifstream infile("tasks.txt");
    if (!infile) {
        std::cout << "No saved tasks found.\n";
        return;
    }

    numTasks = 0;
    while (infile.getline(tasks[numTasks], MAX_TASK_LENGTH) && numTasks < MAX_TASKS) {
        ++numTasks;
    }
    std::cout << "Tasks loaded from file.\n";
    infile.close();
}
