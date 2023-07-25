#include <iostream>
using namespace std;

bool isNeonNumber(int number) {
    int square = number * number;
    int sum = 0;
    
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    
    return (sum == number);
}

int main() {
    int number;
     cin >> number;
    
    if (isNeonNumber(number)) {
         cout << number << " is a Neon number." <<endl;
    } else {
         cout << number << " is not a Neon number." <<endl;
    }
    
    return 0;
}
