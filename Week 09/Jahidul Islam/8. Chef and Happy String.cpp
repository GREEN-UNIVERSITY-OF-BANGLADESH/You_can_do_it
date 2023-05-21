// Writter      : @JahidulZaid
// Problem Link : https://www.codechef.com/problems/HAPPYSTR
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
        string s;
        cin>>s;
        int mined =0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                mined++;
                if(mined==3){
                cout<< "HAPPY"<< endl;
                break;
            }
            }
            else{
                mined=0;
            }
        }
        if (mined !=3){
            cout << "SAD" << endl;
        }
    }
    return 0;
}
