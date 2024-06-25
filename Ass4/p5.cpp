#include <iostream>
using namespace std;


double calculateElectricityCharge(double unitsConsumed) {
    double rateFirst100 = 0.12;
    double rateAdditional = 0.15;
    double charge = 0.0;

    if (unitsConsumed <= 100) {
        charge = unitsConsumed * rateFirst100;
    } else {
        charge = 100 * rateFirst100 + (unitsConsumed - 100) * rateAdditional;
    }
}

int main() {
    double unitsConsumed;
    cout << "Enter the number of units consumed: ";
    cin >> unitsConsumed;
    double electricityCharge = calculateElectricityCharge(unitsConsumed);
    cout << "The electricity charge for " << unitsConsumed << " units is $" << electricityCharge << endl;
}