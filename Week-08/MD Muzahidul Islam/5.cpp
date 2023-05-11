#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s = "START38";
        int n, sc  = 0, lc =0;
        cin>>n;

        for(int i = 0; i< n; i++){
            string in;
            cin>>in;
            if(in == s){
                sc++;
            }
            else{
                lc++;
            }
        }
        cout<< sc<< " "<< lc;
        cout<< endl;
    }
}