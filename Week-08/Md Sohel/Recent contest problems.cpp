#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, one = 0, two = 0;
	string str;
	
	cin >> t;
	while(t--){
	    one = 0;
	    two = 0;
	    cin >> n;
	    while(n--){
	        cin >> str;
	        int same = str.compare("START38");
	        if(same == 0){
	            one++;
	        }else {
	            two++;
	        }
	    }
	    cout << one << " " << two << "\n";
	}
	return 0;
}
