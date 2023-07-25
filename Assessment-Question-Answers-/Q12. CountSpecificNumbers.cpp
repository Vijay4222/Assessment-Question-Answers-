#include <iostream>

using namespace std;

int CountSpecificNumbers(int m, int n) {
    int count = 0;
    for (int num = m; num <= n; num++) {
        int temp = num;
        bool hasSpecificDigits = false;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 1 || digit == 4 || digit == 9) {
                hasSpecificDigits = true;
            } else {
                hasSpecificDigits = false;
                break;
            }
            temp /= 10;
        }
        if (hasSpecificDigits) {
            count++;
        }
    }
    return count;
}

int main() {
    int m, n;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = CountSpecificNumbers(m, n);
    cout << "Count of numbers with specific digits: " << result << endl;

    return 0;
}
