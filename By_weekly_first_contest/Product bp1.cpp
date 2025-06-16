#include <iostream>
using namespace std;

int main() {
    int l, r, m;
    cin >> l >> r >> m;

    long long start = 1;
    for (int j = l; j <= r; j++) {
        start = (start * j) % m;
    }

    cout << start << endl;
    return 0;
}
