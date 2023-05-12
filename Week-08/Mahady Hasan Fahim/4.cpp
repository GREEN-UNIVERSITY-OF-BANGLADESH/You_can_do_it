#include <iostream>
using namespace std;

int main() {
	int t,b,a,aa=0,bb=0,l=0,w;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    aa+=a;
	    bb+=b;
	   int d=abs(aa-bb);
	   if(d>l){
	       l=d;
	       aa>bb?w=1:w=2;
	   }
	  
	}
	cout<<w<<" "<<l<<endl;
	return 0;
}
