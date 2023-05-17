#include <iostream>
using namespace std;

int main() {
	int t;
cin>>t;
while(t--){
    int n,st=0,li=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="START38")
        st++;
        else if (str=="LTIME108")
        li++;
    }
    cout<<st<<" "<<li<<endl;
    

    
    
    
}
	return 0;
}
