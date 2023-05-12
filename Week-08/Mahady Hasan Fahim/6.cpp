#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,p=0,k;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        k=i%10;
        if(k==2||k==3||k==9){
            p++;
        }
    }
    cout<<p<<endl;
}
	return 0;
}
