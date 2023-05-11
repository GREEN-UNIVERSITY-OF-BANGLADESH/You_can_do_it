#include<bits/stdc++.h>
using namespace std;
int rev(int a){
    int rev = 0;
    while(a != 0){
        int num = a%10;
        rev = rev * 10 + num;
        a = a/10;
    }
    return rev;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int r = rev(n);
        if(n == r){
            cout<<"wins"<<endl;
            
        } 
        else {
            cout<<"loses"<<endl;
        }

    }
}