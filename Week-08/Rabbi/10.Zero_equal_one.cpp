#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string ch;
        for(int i=0; i<n; i++){
            if(i==0 || i== n-1){
                cout << 1;
            }
            else{
                cout << 0;
            }

        }
    }
    return 0;
}
