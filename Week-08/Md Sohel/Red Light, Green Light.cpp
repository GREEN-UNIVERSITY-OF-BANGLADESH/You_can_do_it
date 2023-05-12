#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n , k, shot, p;
	
	cin >> t;
	while(t--){
	    shot = 0;
	    cin >> n;
	    cin >> k;
	    while(n--){
	        cin >> p;
	        if(p > k){
	            shot++;
	        }
	    }
	    cout << shot << "\n";
	}
	return 0;
}
