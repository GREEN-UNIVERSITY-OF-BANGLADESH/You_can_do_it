#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int a, i;
       cin >> a;
       for (i = 0; i < a; i++) {
        cout << (i == 0 || i == a -1 ? 1 : 0);
       }
       cout << endl;
    }
    return 0;
}