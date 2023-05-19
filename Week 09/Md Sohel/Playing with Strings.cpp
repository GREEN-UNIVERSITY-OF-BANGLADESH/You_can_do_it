#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, countSOne, countROne;
	cin >> t;
	
	while(t--){
	    cin >> n;
	    countSOne = 0;
	    countROne = 0;
	    string s, r;
	    cin >> s >> r;
	    
	    for(int i = 0; i < n; i++){
	        if(s[i] == '1'){
	            countSOne++;
	        }
	         if(r[i] == '1'){
	            countROne++;
	        }
	    }
	  
	    
	    if(countSOne == countROne){
	        cout << "YES\n";
	    }else {
	        cout << "NO\n";
	    }
	    
	}
	return 0;
}
