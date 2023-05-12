#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int c,d;

	while(t--){
	    int k=0;
	    cin>>c>>d;
	    	int a[c];
	    for(int i=0;i<c;i++){
	        cin>>a[i];
	        if(a[i]>d){
	           k++; 
	        }
	    }
	    cout<<k<<endl;
	    
	}
	return 0;
}
