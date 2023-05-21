#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt; cin >> tt;
    while (tt--) {
        string a;
        cin >> a;
        int count = 0, i = 0;
        for( i = 0; i< a.length();i++){
            if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u'){
                count++;
            }
            else{
                count = 0;
            }
            if(count == 3){
                break;
            }
        }  
        if(count >= 3) cout<<"Happy\n";
        else cout<<"Sad\n"; 
    }
}