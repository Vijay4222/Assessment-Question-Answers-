#include <iostream>
using namespace std;

bool isSpatialNumber(int number) {
    int originalNumber = number;
    int rotatedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        switch (digit) {
            case 0:
            case 1:
            case 8:
                rotatedNumber = rotatedNumber * 10 + digit;
                break;
            case 6:
                rotatedNumber = rotatedNumber * 10 + 9;
                break;
            case 9:
                rotatedNumber = rotatedNumber * 10 + 6;
                break;
            default:
                return false;
        }
        number /= 10;
    }

    return originalNumber == rotatedNumber;
}

int main() {
    int number;

     cout << "Enter a number: ";
     cin >> number;

    if (isSpatialNumber(number)) {
         cout << number << " is a spatial number." <<endl;
    } else {
         cout << number << " is not a spatial number." <<endl;
    }

    return 0;
}
