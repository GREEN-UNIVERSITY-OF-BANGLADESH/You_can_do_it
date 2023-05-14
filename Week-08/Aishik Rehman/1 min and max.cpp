#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        if (n == 0) {
            cout << "0" << endl;
        } else {
            int m, k = 1;
            cin >> m;
            for (int i =1; i < n; i++) {
                int num;
                cin >> num;
                m = (num < m) ? (k = 1, num) : (num == m) ? ++k : m;
            }
            cout << n - k << endl;
        }
    }
    return 0;
}
