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

int getProductOfDigits(int number) {
    int product = 1;
    while (number > 0) {
        product *= number % 10;
        number /= 10;
    }
    return product;
}

bool isSpyNumber(int number) {
    int sum = getSumOfDigits(number);
    int product = getProductOfDigits(number);
    return (sum == product);
}

int main() {
    int number;

     cout << "Enter a number: ";
     cin >> number;

    if (isSpyNumber(number)) {
         cout << number << " is a Spy number." <<  endl;
    } else {
         cout << number << " is not a Spy number." <<  endl;
    }

    return 0;
}
