#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                c++;
            }
        }
        cout<<c<<endl;
    
}
	return 0;
}
