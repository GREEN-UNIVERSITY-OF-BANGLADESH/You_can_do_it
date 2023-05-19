#include <iostream>
using namespace std;
#include<vector>

int main() {
	// your code goes here
	int t, length, maxSpeed, maxImpressed;

	cin >> t;
	while(t--){
	    cin >> length;
	    cin >> maxSpeed;
        vector<int> v;
	    maxImpressed = 0;
	    
	    int temp = length;
	    
	    while(temp--){
	        int d;
	        cin >> d;
	        v.push_back(d);
	    }
	    
	    for(int i = 0; i <= length - maxSpeed; i++){
	        int totalGirlsImpressed = 0;
            for (int j = i; j < i + maxSpeed; j++) {
                totalGirlsImpressed += v[j];
            }
	        maxImpressed = max(maxImpressed ,  totalGirlsImpressed);
	    }
	    
	    cout << maxImpressed << "\n";
	}
	return 0;
}
