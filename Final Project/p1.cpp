#include <iostream>
#include <fstream>
using namespace std;

int numTasks = 0;
string tasks[100];
bool completed[100];

void printOptions()
{
    cout << "1. Add Task\n"
         << "2. Display Tasks\n"
         << "3. Remove Task\n"
         << "4. Mark Task as Completed\n"
         << "5. Save to file\n"
         << "6. Load from file\n"
         << "7. Exit\n";
}

int getChoice()
{
    int x;
    cout << "Enter your choice: ";
    cin >> x;
    cin.ignore(); // Gets rid of enter in buffer
    return x;
}

void addTask()
{
    if (numTasks < 100)
    {
        cout << "Enter task: ";
        getline(cin, tasks[numTasks]);
        completed[numTasks] = false;
        numTasks++;
        cout << "Added Task!\n";
    }
    else
    {
        cout << "Task list is full. Cannot add more tasks.\n";
    }
}

void displayTask()
{
    if (numTasks == 0)
    {
        cout << "There are no tasks to display.\n";
    }
    else
    {
        cout << "Tasks:\n";
        for (int i = 0; i < numTasks; i++)
        {
            cout << (i + 1) << ". ";
            if (completed[i])
            {
                cout << "[✔]";
            }
            else
            {
                cout << "[]";
            }
            cout << tasks[i] << endl;
        }
    }
}

void removeTask()
{
    int taskNum;
    if (numTasks == 0)
    {
        cout << "There are no tasks to remove.\n";
    }
    else
    {
        cout << "Enter task number (1 to " << numTasks << "): ";
        cin >> taskNum;
        cin.ignore(); // get rid of enter in buffer

        int removeTask = taskNum - 1; // 1-based to 0-based

        if (taskNum < 1 || taskNum > numTasks)
        {
            cout << "Invalid Entry. Try again.";
        }
        else
        {
            cout << "Removing task: " << tasks[removeTask] << "." << endl;
            for (int i = removeTask; i < numTasks - 1; i++)
            {
                tasks[i] = tasks[i + 1];
                completed[i] = completed[i + 1];
            }
            tasks[numTasks - 1] = "";
            numTasks--;
        }
    }
    cout << "Task Removed.\n";
}

void markComplete()
{
    int taskNum;
    if (numTasks == 0)
    {
        cout << "There are no tasks to complete.";
    }
    else
    {
        cout << "Which task do you want to mark as complete? (1 to " << numTasks << "): ";
        cin >> taskNum;
        cin.ignore();
        if (taskNum < 0 || taskNum > numTasks)
        {
            cout << "Invalid Input.\n";
        }
        else
        {
            completed[taskNum - 1] = true;
            cout << "Task: " << tasks[taskNum - 1] << " marked as completed.";
        }
    }
}

void saveFile()
{
    ofstream outfile("savedTasks.txt");
    for (int i = 0; i < numTasks; i++)
    {
        outfile << tasks[i] << endl;
    }
    outfile.close();
    cout << "Tasks saved to file!\n";
}

void loadFile()
{
    ifstream infile("savedTasks.txt");
    numTasks = 0;
    string temp;

    while (getline(infile, temp) && numTasks < 100)
    {

        tasks[numTasks] = temp;
        completed[numTasks] = false;
        numTasks++;
    }
    infile.close();
    cout << "Tasks loaded from file.";
}


void receiveChoice(int c)
{
    switch (c)
    {
    case 1:
        addTask();
        break;
    case 2:
        displayTask();
        break;
    case 3:
        removeTask();
        break;
    case 4:
        markComplete();
        break;
    case 5:
        saveFile();
        break;
    case 6:
        loadFile();
        break;
    case 7:
        cout << "Exiting the Program...";
        break;
    default:
        cout << "Invalid Entry";
        break;
    }
    cout << endl;
}

int main()
{
    cout << "Welcome to you to-do list manager!" << endl;
    int choice;
    do
    {
        printOptions();
        choice = getChoice();
        receiveChoice(choice);
    } while (choice != 7);
}