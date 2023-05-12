#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a=0,b=0;
	  int tt;
	  cin>>tt;
	  while(tt--){
	       string s;
	   cin>>s;
	   if(s[0]=='S'){
	       a++;
	   }else{
	       b++;
	   }
	   	
	  }
	  cout<<a<<" "<<b<<endl;
	}

	return 0;
}
