#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
    	int arr[5];
    	int x=0;
    	while(n!=0)
    	{
    	    int d=n%10;
    	    arr[x]=d; x++;
    	    n/=10;
    	}
    	bool verify=true;
    	for(int i=0; i<x/2 && verify; i++)
    	{
    	    if(arr[i]!=arr[x-i-1])
    	        verify=false;
    	}
    	if(verify)
    	    cout << "wins" << "\n" ;
    	else
    	    cout<< "loses" << "\n" ;
	}
	return 0;
}
