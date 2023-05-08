#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==0){
        cout<<"0"<<endl;
    }else{
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m=a[0];
        int k=0;
        for(int i=0;i<n;i++){
            if(m>a[i]){
                m=a[i];
            }
        }
            for(int i=0;i<n;i++){
            if(m==a[i]){
                k++;
            }
        }
        cout<<n-k<<endl;
    }
    
}
	return 0;
}
