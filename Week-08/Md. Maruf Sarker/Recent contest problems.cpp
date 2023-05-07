// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/RECENTCONT
// Language: cpp
// Date: 2023-01-31
// Difficulty Rating: 793

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int start = 0, ltime = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == "START38") start++;
        else ltime++;
    }

    cout << start << " " << ltime << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}