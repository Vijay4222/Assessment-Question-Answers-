#include <iostream>
using namespace std;
int getSumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

bool isDivisibleByOriginalNumber(int number) {
    int sum = getSumOfDigits(number);
    return (sum % number == 0);
}

int main() {
    int number;

     cout << "Enter a number: ";
      cin >> number;

    if (isDivisibleByOriginalNumber(number)) {
          cout << "The sum of digits of " << number << " is fully divisible by " << number << "." <<endl;
    } else {
          cout << "The sum of digits of " << number << " is not fully divisible by " << number << "." <<endl;
    }

    return 0;
}
