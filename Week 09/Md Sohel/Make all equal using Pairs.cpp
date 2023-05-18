#include <iostream>
using namespace std;
#include <set>

int main() {
	// your code goes here
	int t, n;

	
	cin >> t;
	while(t--){
	    multiset <int> arr;
	    cin >> n;
	    
	    while(n--){
	        int d;
	        cin >> d;
	        arr.insert(d);
	    }
	    int maxValueCounter = 0;
	    int max = 0;
	    
	    int i = *arr.begin();
	    
	    for(auto j : arr){
	        if(i == j){
	            maxValueCounter++;
	        }else {
	           max = max > maxValueCounter ? max : maxValueCounter;
	           maxValueCounter = 1;
	           i = j;
	        }
	    }
	    max = max > maxValueCounter ? max : maxValueCounter;
	    
	    int operation = arr.size() - max;
	    
	    cout << operation;
	    cout << "\n";
	}
	return 0;
}
