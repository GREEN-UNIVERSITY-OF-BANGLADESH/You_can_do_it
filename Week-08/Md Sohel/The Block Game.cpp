#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, temp, rev;

	cin >> t;
	while(t--){
	    cin >> n;
	    temp = n;
	    rev = 0;

	    while(temp != 0){
	        rev = (rev * 10) + (temp % 10);
	        temp = temp / 10;
	    }

	    if(n == rev){
	        cout << "wins\n";
	    }else {
	        cout << "loses\n";
	    }
	}

	return 0;
}
