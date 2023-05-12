#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    for(int i=0;i<a;i++){
	        if(i==0||i==a-1){
	            cout<<"1";
	        }else{
	            cout<<"0";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
