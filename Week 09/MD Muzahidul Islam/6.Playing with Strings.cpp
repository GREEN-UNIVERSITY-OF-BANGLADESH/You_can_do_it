#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, a_count = 0, b_count = 0;cin>>n;
        string a, b;
        cin>>a >> b;
        for(int i = 0; i< n; i++){
            if(a[i] == '1')a_count++;
            if(b[i] == '1')b_count++;
        }
        if(a_count == b_count) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

