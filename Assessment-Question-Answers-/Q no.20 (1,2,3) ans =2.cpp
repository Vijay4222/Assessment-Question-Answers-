#include <iostream>
#include <vector>
#include <cmath>


using namespace std;
int calculatePenalty(const vector<int>& order) {
    int penalty = 0;
    for (size_t i = 1; i < order.size(); i++) {
        penalty += abs(order[i] - order[i - 1]);
    }
    return penalty;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
     cin >> n;

     vector<int> order;
    for (int i = 0; i < n; i++) {
        int element;
         cin >> element;
        order.push_back(element);
    }

    int minPenalty = calculatePenalty(order);

     cout << "Minimum Penalty: " << minPenalty <<  endl;

    return 0;
}
