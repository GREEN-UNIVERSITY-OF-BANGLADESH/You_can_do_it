#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a==0 && b>0)
	    cout<<"Liquid"<<endl;
	    else if(a>0&& b==0)
	    cout<<"Solid"<<endl;
	    else
	    cout<<"Solution"<<endl;
	}
	return 0;
}
