#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int k = 5;

    int j;
    cout << "Enter the number of candies to purchase: ";
    cin >> j;

    if (j < 1|| j>=n)
        cout << "Invalid" << endl;
    else {
        cout << "Sold=" << j << endl;
        cout << "Available=" << n - j << endl;
    }

    return 0;
}
