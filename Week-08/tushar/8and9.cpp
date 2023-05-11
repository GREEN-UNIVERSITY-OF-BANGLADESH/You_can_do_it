#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num,sum=0,rem=0;
		cin>>num;
		int temp=num;
		while(num!=0)
		{
			rem=num%10;
			sum=sum*10+rem;
			num/=10;
		}
	
		if(sum!=temp)
		{
			cout<<"loses"<<endl;
		}
		else
		{
			cout<<"wins"<<endl;
		}
	}
}