#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, h;
        cin >> n >> h;
        int arr[n];
        int count=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] > h)
                count++;
        }
        cout << count << "\n";
    }
	// your code goes here
	return 0;
}
