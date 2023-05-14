#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, i, j = 0, k;
        cin >> l >> r;
        for (i = l; i <= r; i++ ) {
            k = i % 10;
            if (k == 2 || k == 3 || k == 9) {
                j++;
            }
        }
        cout << j << endl;
    }
    return 0;
}