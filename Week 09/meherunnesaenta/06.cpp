#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     cin>>n;
	     int k=0;
	     int k1=0;
	     char s[n],r[n];
	     for(int i=0;i<n;i++)
	     cin>>s[i];
	     for(int i=0;i<n;i++)
	     cin>>r[i];
	     for(int i=0;i<n;i++)
	     {
	         if(s[i]=='0')
	         k++;
	         if(r[i]=='0')
	         k1++;
	     }
	     if(k==k1)
	     cout<<"YES"<<endl;
	     else
	     cout<<"NO"<<endl;
	}
	return 0;
}
