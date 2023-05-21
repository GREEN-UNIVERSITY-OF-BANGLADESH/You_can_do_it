#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n],freq[1010]={0};
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			freq[ar[i]]++;
		}
		int ans= *max_element(freq,freq+1010);
		
		 cout<<n-ans<<endl;
	}
	return 0;
}