#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int find(int f, vector<int>v){
    int count = 0;

    for(auto i = v.begin(); i != v.end(); i++){
        if(*i == f){
            count++;
        }
    }

    return count;
}

int main() {
	// your code goes here
	vector<int> arr;
	int t, n;
	cin >> t;

	while(t--){
	    cin >> n;

	    for(int i = 0; i < n; i++){
	        int d;
	        cin >> d;
	        arr.push_back(d);
	    }

        sort(arr.begin(), arr.end());

	    int f = find(arr[0], arr);
        arr.clear();
	    cout << (n - f) << "\n";
	}
	return 0;
}

