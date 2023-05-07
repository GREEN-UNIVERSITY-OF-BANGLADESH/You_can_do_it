// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/MIXTURE
// Language: cpp
// Date: 2022-12-03
// Difficulty Rating: 841

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;

        if(a > 0 and b > 0) cout << "Solution" << endl;
        else if(b == 0) cout << "Solid" << endl;
        else cout << "Liquid" << endl;
    }
}