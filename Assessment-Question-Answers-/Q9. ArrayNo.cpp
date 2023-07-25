#include <iostream>
#include <vector>
using namespace std;

int main() {
     vector<int> a = {8, 3, 5, 2, 4, 7, 9, 1};
     vector<int> b(a.size(), 0);

    for (int i = 0; i < a.size(); i++) {
        int sumSmaller = 0;
        int sumLarger = 0;

        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] < a[j])
                sumSmaller += a[j];
            else
                sumLarger += a[j];
        }

        b[i] = sumSmaller * sumLarger;
    }

    for (int i = 0; i < b.size(); i++) {
         cout << b[i] << " ";
    }
      cout <<endl;

    return 0;
}
