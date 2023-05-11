#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A,B;
		cin>>A>>B;
		if(A>0 && B>0)
		{
			cout<<"Solution"<<endl;
		}
		else if(A==0 && B>0)
		{
			cout<<"Liquid"<<endl;
		}
		else if(A>0 && B==0)
		{
			cout<<"Solid"<<endl;
		}
	}
}