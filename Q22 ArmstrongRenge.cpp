#include <iostream>
#include <cmath>
using namespace std;


int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}


bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        if (isArmstrong(num)) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
