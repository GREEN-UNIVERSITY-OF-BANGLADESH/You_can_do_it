#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t, n;
	
	cin >> t;
	while(t--){
	    cin >> n;
	    int temp = n;
	    while(n){
	        if(n==1 || n == temp){
	            cout << '0';
	        }else {
	            cout << '1';
	        }
	        n--;
	    }
	    
	   cout << "\n";
	}
	return 0;
}
