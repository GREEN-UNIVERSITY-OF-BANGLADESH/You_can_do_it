#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int H, Ts;
        double CC;
        cin>> H >> CC >> Ts;

        if(H > 50 and CC < 0.7 and Ts > 5600){
            cout<< 10;
        }
        else if( H > 50 and CC < 0.7 and Ts <= 5600){
            cout<< 9;
        }
        else if( H <= 50 and CC < 0.7 and Ts > 5600){
            cout<< 8;
        }
        else if(H> 50 and Ts > 5600 and CC >= 0.7){
            cout<< 7;
        }
        else if(H > 50 or CC < 0.7 or Ts >5600){
            cout<< 6;
        }
        else {
            cout << 5; 
        }
        cout<<endl;
    }



}