#include <iostream>
using namespace std;

int main() {
	int t,a;
	cin>>t;
	while(t--){
	    a=0;
	   
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='H'){

	            a++;
	            if(a>1){
	               cout<<"Invalid"<<endl;
	               break;
	            }
	            
	        }else if(s[i]=='T'){
	           
	                a--;
	                if(a<0){
	               cout<<"Invalid"<<endl;
	               break;
	            }
	                
	          
	                
	            }
	       
	    }
	   if(a==0){
	        cout<<"Valid"<<endl;
	        
	    }else if(a==1){
	        cout<<"Invalid"<<endl;
	    }
	}
	return 0;
}
