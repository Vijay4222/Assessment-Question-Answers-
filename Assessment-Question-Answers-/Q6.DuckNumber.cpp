#include <iostream>
using namespace std;


bool isDuckNumber(int number) {
    bool hasLeadingZero = false;

    while (number > 0) {
        int digit = number % 10;
        if (digit == 0) {
            if (!hasLeadingZero) {
                return true;
            }
        }
        else {
            hasLeadingZero = true;
        }
        number /= 10;
    }

    return false;
}

int main() {
    int number;

     cout << "Enter a number: ";
     cin >> number;

    if (isDuckNumber(number)) {
         cout << number << " is a duck number." <<endl;
    } else {
         cout << number << " is not a duck number." <<endl;
    }

    return 0;
}
