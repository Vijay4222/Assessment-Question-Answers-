#include <iostream>

using namespace std;

int BalanceFruits(int a, int m, int rs) {
    if (a > m) {
        int neededMangoes = a - m;
        rs -= neededMangoes;
    } else if (a < m) {
        int excessMangoes = m - a;
        rs += excessMangoes;
    }
    return rs;
}

int main() {
    int a, m, rs;
    cout << "Enter the number of apples (a): "<<endl;
    cin >> a;
    cout << "Enter the number of mangoes (m): "<<endl;
    cin >> m;
    cout << "Enter the available rupees (rs): "<<endl;
    cin >> rs;

    int result = BalanceFruits(a, m, rs);
    cout << "Rupees left after balancing fruits: " << result << endl;

    return 0;
}
