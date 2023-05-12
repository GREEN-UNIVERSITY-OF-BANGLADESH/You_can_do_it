#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,x;
    int q,w=0,e;
    cin>>a;
    x=a;
    while(x>0){
        q=x%10;
        w=(w*10)+q;
        x=x/10;
        
    }
    if(w==a){
        cout<<"wins"<<endl;
    }else {
        cout<<"loses"<<endl;
    }
   
}
	return 0;
}
