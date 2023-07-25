#include <iostream>

using namespace std;
bool hasRequiredPrimeFactors(int num) {
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
    return num == 1;
}

int findNthNumber(int N) {
    int count = 0;
    int number = 1;
    
    while (count < N) {
        if (hasRequiredPrimeFactors(number)) {
            count++;
        }
        number++;
    }
    
    return number - 1; 
	}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int result = findNthNumber(N);

    cout << "The N-th number with prime factors 1, 2, 3, and 5 is: " << result << endl;

    return 0;
}
