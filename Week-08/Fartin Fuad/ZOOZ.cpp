#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string str="";
	    int n;
	    cin >> n;
	    for(int i=0; i<n; i++)
	    {
	        
	        if(n%2==0)
	        {
	            if(i<n-2)
	            {
	                if(i%2==0)
	                    str += to_string(1);
	                else
	                    str += to_string(0);
	                
	            }
	            else
	            {
	                if(i%2==0)
	                    str += to_string(0);
	                else
	                    str += to_string(1);
	            }
	            
	            
	        }
	        else
	        {
	            if(i%2==0)
	                str += to_string(0);
	            else
	                str += to_string(1);
	        }
	            
	    }
	    cout << str << "\n";
	}
	return 0;
}
