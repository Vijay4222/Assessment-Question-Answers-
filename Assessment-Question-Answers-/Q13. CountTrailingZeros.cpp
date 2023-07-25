#include <iostream>
using namespace std; 
int countTrailingZeros(int n) {
    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int number;
      cout << "Enter a number: ";
     cin >> number;

    int trailingZeros = countTrailingZeros(number);

cout << "The number of trailing zeros in " << number << "! is: " << trailingZeros << std::endl;

    return 0;
}
