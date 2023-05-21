#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string ss;
		cin>>ss;
		string rr;
		cin>>rr;
		int k=0,k1=0;
		for(int i=0;i<ss.size();i++)
		{
			if(ss[i]=='1'){
				k++;
			}
		}
		for(int i=0;i<rr.size();i++)
		{
			if(rr[i]=='1'){
				k1++;
			}
		}
		if(k==k1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}