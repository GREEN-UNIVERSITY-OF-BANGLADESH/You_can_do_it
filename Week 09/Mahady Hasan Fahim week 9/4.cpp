#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int n,tr=0,tr2=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i]>>b[i];
	    }
	    for(int i=0;i<=8;i++){
            tr=0;
	        for(int j=0;j<n;j++){
	            if(i==a[j]&& b[j]>tr){
	                tr=b[j];
	                
	            }
	            
	        }
	        tr2=tr2+tr;
	    }
	    cout<<tr2<<endl;
	}
	return 0;
}
