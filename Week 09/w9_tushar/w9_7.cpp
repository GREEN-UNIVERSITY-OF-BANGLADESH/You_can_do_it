#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int c=0;
		string st;
		cin>>st;
		for(int i=0;i<st.size();i++)
		{
			if((st[i]=='5')||(st[i]=='0'))
				c++;
		}
		if(c>0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}