#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	 
	while(t--)
	{
	     int n,i=0,sum=0;
	     cin>>n;
	     int temp=n;
	     while(n!=0)
	     {
	         i=n%10;
	         sum=(sum*10)+i;
	         n=n/10;
	     }
	     if(temp==sum)
	     cout<<"wins"<<endl;
	     else
	     cout<<"loses"<<endl;
	}
	return 0;
}
