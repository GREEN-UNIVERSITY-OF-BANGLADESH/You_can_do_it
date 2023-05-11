#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int r, n, count = 0;
        cin>> r >> n;
        for(int i = r; i<= n;i++){
            if(i< 10 and i == 2|| i == 3 || i  == 9){
                count++;
            }
            else{
                int v = (i%10);
                if( v== 2 ||  v == 3 || v == 9){
                    count++;
                }
            }



        }
        cout<< count<< endl;

    }
}