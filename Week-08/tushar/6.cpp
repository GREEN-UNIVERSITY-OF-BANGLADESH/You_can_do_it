#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int L,R,count=0;
		cin>>L>>R;
		for(int i=L;i<=R;i++)
		{
			if((i%10==2) || (i%10==3) || (i%10==9))
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}