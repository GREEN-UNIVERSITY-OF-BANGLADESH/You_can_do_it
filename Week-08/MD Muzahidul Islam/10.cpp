#include<bits/stdc++.h>
using namespace std;
int iseven(int a){
    if(a %2 == 0){return true;}
    else return false;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string e ="0";
        if(iseven(n)){
            for(int i = 0;i<n-3;i++){
                e += "0"; 
            }
            cout<<"1"<<e<<"1"<<endl;
        }
        else{
            for(int i = 0; i< ((n-1)/2)-1; i++){
                e += "0";
            }
            cout<<e<<"1"<<e<<endl;
        }
    }
}