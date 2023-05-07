// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.codechef.com/START82D/problems/OPMIN
// Language: cpp
// Date: 2023-03-22
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define nn int n; cin >> n
#define vi vector<int>
#define all(x) x.begin(), x.end()

void solve(int t){
    nn;
    vi a(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));

    int min = a[0];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != min){
            cnt++;
            a[i] = min;
        }
    }
    
    cout << cnt << endl;
}
int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
}