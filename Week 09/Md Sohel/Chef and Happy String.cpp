#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, count, found;
	string s;
	
	cin >> t;
	while(t--){
	    count = 0;
	    found = 0;
	    
	    cin >> s;
	    for(int i = 0; i < s.length(); i++){
	        
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
	            count++;
	        }else {
	            count = 0;
	        }
	        
	        if(count > 2){
	            found = 1;
	            break;
	        }
	    }
	    
	    if(found == 1){
	        cout << "Happy\n";
	    }else {
	        cout << "Sad\n";
	    }
	}
	return 0;
}
