#include <iostream>
using namespace std;
#include<map>

int main() {
	// your code goes here
	int test, submission, TotalScore;
	cin >> test;
	

	
	while(test--){
	    map<int, int> arr;
	    TotalScore = 0;
	    cin >> submission;
	    
	    
	    while(submission--){
	        int index, score;
	        cin >> index;
	        cin >> score;
	        
	        if(index > 8){
	            continue;
	        }
	        
	        if(arr.count(index) > 0){
	            TotalScore -= arr[index];
	            arr[index] = arr[index] > score ? arr[index] : score;
	            TotalScore += arr[index];
	        }else {
	             arr[index] = score;
	             TotalScore += arr[index];
	        }
	    }
	    
	    cout << TotalScore << "\n";
	}
	return 0;
}
