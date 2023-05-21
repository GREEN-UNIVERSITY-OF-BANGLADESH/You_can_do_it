#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, c_H = 0, c_T = 0;
        cin >> n;
        char a[n];
        string result = "Valid\n";
        vector <char> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != '.' && a[i] == 'H') {
                s.push_back(a[i]);
                c_H++;
            } else if (a[i] != '.' && a[i] == 'T') {
                s.push_back(a[i]);
                c_T++;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[0] == 'T') {
                result = "Invalid\n";
            }
            else if (s[i] == s[i + 1]) {
                result = "Invalid\n";
                break;
            } else if (c_T != c_H) result = "Invalid\n";

        }
        cout << result;

    }
}