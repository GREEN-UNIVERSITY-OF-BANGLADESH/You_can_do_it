#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; 
        cin>>n;
        string x;
        cin>>x;
        for(int i = 0; i< n; i++){
            if(x[i] == '0' || x[i] == '5'){
                cout<<"Yes\n";
                break;
            } else if(i == (n-1) ) {cout<<"No\n";}
        } 

    }
}

