#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int mp,ht,count=0;
		cin>>mp>>ht;
		int midphight[mp];
			for(int i=0;i<mp;i++)
			{
				cin>>midphight[i];
			}
			for(int i=0;i<mp;i++)
			{
				if(midphight[i]>ht)
				{
					count++;
				}
			}
			cout<<count<<endl;
	}
}