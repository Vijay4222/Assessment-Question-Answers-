#include <iostream>
using namespace std;

double calculateIncomeTax(double income) {
    if (income <= 400000) {
        return 0;
    } else if (income <= 700000) {
        return 0.05 * (income - 700000);
    } else if (income <= 1000000) {
        return 0.05 * (700000 - 400000) + 0.1 * (income - 700000);
    } else if (income <= 1400000) {
        return 0.05 * (700000 - 400000) + 0.1 * (1000000 - 700000) + 0.15 * (income - 1000000);
    } else {
        return 0.05 * (700000 - 400000) + 0.1 * (1000000 - 700000) + 0.15 * (1400000 - 1000000) + 0.25 * (income - 1400000);
    }
}

int main() {
    double income;
    cout << "Enter annual income: ";
    cin >> income;

    double tax = calculateIncomeTax(income);
    cout << "The income tax payable is: " << tax << endl;

    return 0;
}