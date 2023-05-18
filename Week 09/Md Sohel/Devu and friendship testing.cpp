#include <iostream>
using namespace std;
#include <set>

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	
	while(t--){
	    set <int> arr;
	    cin >> n;
	    while(n--){
	        int d;
	        cin >> d;
	        arr.insert(d);
	    }
	    
	    cout << arr.size() << "\n";
	}
	
	return 0;
}
