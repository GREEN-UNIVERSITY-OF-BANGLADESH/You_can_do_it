#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int c,d;
	int a[c];
	while(t--){
	    int k=0;
	    cin>>c>>d;
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
