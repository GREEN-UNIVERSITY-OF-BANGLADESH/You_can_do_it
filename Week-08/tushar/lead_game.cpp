#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
		int s1=0,s2=0,p1,p2,max=0,ply;
	while(t--){
		cin>>p1>>p2;
		s1+=p1;
		s2+=p2;
		
		if(abs(s1-s2)>max){
			if(s1>s2){
				ply=1;
			}
			else
			{
				ply=2;
			}
		max=abs(s1-s2);
		}

	}
	cout<<ply<<" "<<max<<endl;
}