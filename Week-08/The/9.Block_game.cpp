#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {
	   int n, s=0 ,rem ,num;
	   cin>>n;
	   num = n;
	   while(n > 0) {
	       rem = n%10;
	       s = (s*10) + rem;
	       n = n/10;
	   }
	   if(num == s) {
	       cout<<"wins"<<endl;
	   }else {
	       cout<<"loses"<<endl;
	   }
	}
	return 0;
}
