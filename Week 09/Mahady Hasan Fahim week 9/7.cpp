#include <iostream>
using namespace std;

int main() {
int t,r,b=0;
string n;
cin>>t;
while(t--){
    b=0;
    cin>>r;
    cin>>n;
    for(int i=0;i<r;i++){
        if(n[i]=='5'||n[i]=='0'){
      
                 
        }else{
         b++;
        }
    }
    if(r==b){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    
    
}
	return 0;
}
