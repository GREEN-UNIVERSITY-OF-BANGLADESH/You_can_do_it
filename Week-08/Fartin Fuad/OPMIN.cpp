#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n;
	    std::cin >> n;
	    int array[n];
	    int array2[101]={0};
	    int min=100;
	    int index;
	    for(int i=0; i<n; i++)
	    {
	        std::cin >> array[i];
	        array2[array[i]]++;
	        if(array[i] <= min)
	        {
	            if(array[i]==min)
	                min=array[i];
	            else
	            {
	                index=i+1;
	                min=array[i];
	            }
	        }
	    }
	    //cout<< "Min is " << min << "\n";
	    int count=0;
	    for(int i=min+1; i<100; i++)
	    {
	        //cout << "Checking index " << i << "\n" ;
	        count+=array2[i];
	    }
	    std::cout<< count << "\n";
	}
	return 0;
}
