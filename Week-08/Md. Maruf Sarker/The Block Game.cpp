// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/submit/PALL01
// Language: cpp / go / c / python
// Date: 2022-09-20
// Difficulty Rating: 830

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int rev = 0;
        int temp = n;
        while(temp != 0) {
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if(rev == n) cout << "wins" << endl;
        else cout << "loses" << endl;
    }
}