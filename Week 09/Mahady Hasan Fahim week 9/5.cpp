#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0,mainSum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-k;i++){
        sum=0;
       for(int j=i;j<i+k;j++){
           sum+=a[j];
           
       }
             mainSum= max(mainSum,sum);
        }
            cout<<mainSum<<endl;
        
    }

          


	return 0;
}
