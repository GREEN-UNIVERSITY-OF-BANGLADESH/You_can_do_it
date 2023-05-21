#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		int count=0;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')&& (s[i+2]=='a' || s[i+2]=='e' || s[i+2]=='i' || s[i+2]=='o' || s[i+2]=='u'))
				count++;
		}
		if(count>0)cout<<"Happy"<<endl;
		else cout<<"Sad"<<endl;
	}
}