// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/NUM239
// Language: cpp / go / c / python
// Date: 2022-12-12
// Difficulty Rating: 873

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l, r;
    cin >> l >> r;

    int count = 0;
    for(int i = l; i <= r; i++){
        // calculate the last digit
        int last_digit = i % 10;
        if(last_digit == 2 || last_digit == 3 || last_digit == 9) count++;
    }
    cout << count << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}