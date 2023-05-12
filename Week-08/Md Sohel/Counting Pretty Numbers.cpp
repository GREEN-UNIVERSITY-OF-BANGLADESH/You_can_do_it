#include <iostream>
using namespace std;

int prettyNumber(int n){
    int rem = n % 10;
    int prettyNumber = ((n - rem) / 10 ) * 3;
    
    for(int i = 2; i <= rem; i++){
        if(i == 2 || i == 3 || i == 9){
            prettyNumber++;
        }
    }
    
    return prettyNumber;
}

int main() {
	// your code goes here
	int t, lower, heigher, lCount, hCount;
	cin >> t;
	
	while(t--){
	    cin >> lower;
	    cin >> heigher;
	    
	    lCount = prettyNumber(lower-1);
	    hCount = prettyNumber(heigher);
	    
	    cout << hCount - lCount << "\n";
	}
	return 0;
}
