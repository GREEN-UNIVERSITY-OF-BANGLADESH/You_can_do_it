#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main() {
    int tt;cin>>tt;
    while(tt--){
         int n, freq = 0;cin>>n;
         vector <int> v(n);
         for(int i = 0; i< n;i++){
            cin>>v[i];
         }
         for(int i = 0; i< n; i++){
            int num = count(all(v), v[i]);
             if(freq < num){
                freq = num;
             }
         }
         cout<<n-freq<<endl;    
    }
}
    
