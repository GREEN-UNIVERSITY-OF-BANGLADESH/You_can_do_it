#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	string num;
	
	cin >> t;
	while(t--){
	    cin >> n;
	    cin >> num;
	    
	    if(num.find('5') < n || num.find('0') < n){
	        cout << "YES\n";
	    }else {
	        cout << "NO\n";
	    }
	    
	}
	return 0;
}
