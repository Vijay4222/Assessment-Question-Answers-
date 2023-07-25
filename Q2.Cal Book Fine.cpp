#include <iostream>
using namespace std;

int main() {
    int numBooks;
    cout << "Enter the number of books borrowed: ";
    cin >> numBooks;

    int daysOverdue;
    cout << "Enter the number of days the books are overdue: ";
    cin >> daysOverdue;

    double totalFine = 0.0;

    if (daysOverdue >= 1 && daysOverdue <= 5) {
        totalFine = numBooks * 0.40;
    } else if (daysOverdue >= 6 && daysOverdue <= 10) {
        totalFine = numBooks * 0.65;
    } else if (daysOverdue >= 11 && daysOverdue <= 15) {
        totalFine = numBooks * 0.80;
    } else if (daysOverdue >= 16 && daysOverdue <= 25) {
        totalFine = numBooks * 1.20;
    }

    int numMissingBooks;
    cout << "Enter the number of missing books: ";
    cin >> numMissingBooks;

    totalFine += numMissingBooks * 500.0;

    int numHarmedBooks;
    cout << "Enter the number of haped books: ";
    cin >> numHarmedBooks;

    totalFine += numHarmedBooks * 200.0;

    char bookCondition;
    cout << "Enter the condition of the remaining books (N for none): ";
    cin >> bookCondition;

    if (bookCondition == 'N') {
        cout << "Total fine: $" << totalFine << endl;
    } else {
        cout << "Invalid input for book condition!" << endl;
    }

    return 0;
}
