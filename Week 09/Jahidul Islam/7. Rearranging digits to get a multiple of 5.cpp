// Writter      : @JahidulZaid
// Problem Link : https://www.codechef.com/problems/DIGARR
// Language     : c++
// Date         : 17/5/2023
// Submission   : 

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mined =0;
        for(int i = 0; i<n; i++){
            if(s[i]=='0' || s[i]=='5'){
                mined = 1;
            }
        }
        if (mined == 1) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
