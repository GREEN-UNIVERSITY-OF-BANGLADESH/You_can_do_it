#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int bin_ar[size];
		
		for(int i=0;i<size;i++)
		{
				if((i==0) || (i==size-1))
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
		}
		
		cout<<endl;
	}
	
}