#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    string s,d;
	    int n,x=0,y=0;
	    cin>>n;
	    cin>>s;
	    cin>>d;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            x++;
	        }if( d[i]=='1'){
	            y++;
	        }
	    }
	    if(x==y){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
