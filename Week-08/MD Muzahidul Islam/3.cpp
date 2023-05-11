#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int A , B;
       cin>> A>> B;
       if(A > 0 and B > 0){
        cout<< "Solution";
       }
       else if( A == 0 and B!= 0){
        cout<< "Liquid";
       }
       else {
        cout<< "Solid";
       }
       cout<< endl;

    }



}