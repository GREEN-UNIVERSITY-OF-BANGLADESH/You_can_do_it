#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int n,k,cnt=0;
	  cin>>n>>k;
	  int h[n];
	for(int j=0;j<n;j++)
	    {
	        cin>>h[j];
	        if(h[j]>k)
	        {
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	    
	    
	    
	    
	}
	return 0;
}
