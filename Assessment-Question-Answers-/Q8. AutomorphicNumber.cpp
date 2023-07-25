#include <iostream>
using namespace std;

bool isAutomorphicNumber(int number) {
    int square = number * number;
    
    int originalDigits = 0;
    int temp = number;
    while (temp > 0) {
        originalDigits++;
        temp /= 10;
    }
    
    int lastDigits = 0;
    int multiplier = 1;
    temp = square;
    while (originalDigits > 0) {
        lastDigits = lastDigits + (temp % 10) * multiplier;
        temp /= 10;
        multiplier *= 10;
        originalDigits--;
    }
    
    return (lastDigits == number);
}

int main() {
    int number;
    cin >> number;
    
    if (isAutomorphicNumber(number)) {
        cout << number << " is an automorphic number." << endl;
    } else {
        cout << number << " is not an automorphic number." << endl;
    }
    
    return 0;
}
