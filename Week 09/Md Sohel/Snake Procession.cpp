#include <iostream>
using namespace std;
#include<stack>

int main() {
	// your code goes here
	int t, n, found;
	string s;
	cin >> t;
	
	while(t--){
	    cin >> n;
	    cin >> s;
	    
	    stack<int> st;
	    found = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(s[i] != '.'){
	            if(st.empty() == 1){
	               if(s[i] == 'T'){
	                   found = 1;
	                   break;
	               }else {
	                   st.push(s[i]);
	               }
	            }else if(st.top() == s[i]){
	                found = 1;
	                break;
	            }else{
	                st.pop();
	            }
	        }
	    }
	    
	    if(found == 0 && st.empty()){
	        cout << "Valid\n";
	    }else {
	        cout << "Invalid\n";
	    }
	}
	return 0;
}
