#include<bits/stdc++.h>
using namespace std;

int main(){
	int ar[10]={6,2,5,5,4,5,6,3,7,6};
	int t;
	cin>>t;
	while(t--){
		int a,b,sum,rem=0;
		cin>>a>>b;
		sum=a+b;
		while (sum!=0){
			rem+=ar[sum%10];
			sum/=10;
		}
		cout<<rem<<endl;
	}
}