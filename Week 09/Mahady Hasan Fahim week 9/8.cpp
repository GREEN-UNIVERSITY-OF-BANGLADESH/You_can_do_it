#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	string a;
	while(t--){
	    int k=0;
	    cin>>a;

	   for(int i=0;i<a.size()-2;i++){
	       if((a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'||a[i]=='u')&&(a[i+1]=='a'|| a[i+1]=='e'|| a[i+1]=='i'|| a[i+1]=='o'||a[i+1]=='u')&&(a[i+2]=='a'|| a[i+2]=='e'|| a[i+2]=='i'|| a[i+2]=='o'||a[i+2]=='u')){
	            k++;
	       }
	       
	     
	   }
	   if(k>0){
	       cout<<"Happy"<<endl;
	   }else{
	       cout<<"Sad"<<endl;
	   }
	    
	    
	}
	return 0;
}
