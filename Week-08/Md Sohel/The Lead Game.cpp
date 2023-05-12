#include <iostream>
using namespace std;

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main() {
	// your code goes here
	int round, scoreOne=0, scoreTwo=0;
	int leadOne = 0, leadTwo = 0;
	cin >> round;
	
	while(round--){
	    int a,b;
	    cin >> a;
	    cin >> b;
	    
	    scoreOne+=a;
	    scoreTwo+=b;
	 
	    
	    if(scoreOne > scoreTwo){
	        leadOne = max(leadOne, scoreOne - scoreTwo);
	    }else {
	        leadTwo = max(leadTwo, scoreTwo - scoreOne);
	    }
	    
	}
	
	if(leadOne > leadTwo){
	    cout << 1 << " " << leadOne << "\n";
	}else {
	    cout << 2 << " " << leadTwo << "\n";
	}
	return 0;
}
