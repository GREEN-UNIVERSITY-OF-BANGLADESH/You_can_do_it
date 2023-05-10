#include <iostream>
using namespace std;

int main() 
{
    
	int t;
	cin >> t;
	while(t--)
	{
	    float hard, carbon, tensil;
	    int arr[3]={0};
	    std::cin >> hard >> carbon >> tensil;
	    if(hard>50)
        {
            //printf("Hard true\n");
	        arr[0]=1;
        }
	    if(carbon<0.7)
        {
	        arr[1]=1;
        }
	    if(tensil>5600)
	        arr[2]=1;
	   if(arr[0]==1)
	   {
	       if(arr[1]==1)
	       {
	           if(arr[2]==1)
	                std::cout << "10\n" ;
	           else
	                std::cout << "9\n" ;
	       }
	       else if(arr[2]==1)
	            std::cout << "7\n" ;
	       else
	            std::cout << "6\n" ;
	   }
	   else
	   {
	       if(arr[1]==1)
	       {
	           if(arr[2]==1)
                    std::cout << "8\n" ;
                else
                    std::cout << "6\n" ;
	       }
	       else if(arr[2]==1)
	            std::cout << "6\n" ;
	       else
	            std::cout << "5\n" ;
	   }
	}
	return 0;
}
