#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int count=0, b = 0;
		int n;
		cin>>n;
		string st;
		cin>>st;
		for(int i=0;i<st.size();i++)
		{
			if(st[i] != '.')
			{
				if(st[i]=='H')
				{
					count++;
				}
				else count--;
				if(count<0 || 1<count){

					b=1;
				break;
				}
			}
		}
		if(!b && !count) 
			cout<<"Valid"<<endl;
		else cout<<"Invalid"<<endl;
	}

}