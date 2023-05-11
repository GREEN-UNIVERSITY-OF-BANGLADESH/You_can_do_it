#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
         string s="START38";
         int n,count1=0,count2=0;
         cin>>n;
         string s1;
         for(int i=0;i<n;i++){

         cin>>s1;
         if(s1==s){
         	count1++;
         }
         else{
         	count2++;
         }
         }
         cout<<count1<<" "<<count2<<endl;
	}
}