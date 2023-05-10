#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	// your code goes here
	
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start=0, ltime=0;
        for(int i=0; i<n; i++)
        {
            char string[10];
            cin >> string;
            //cout << "String is "<< string << "\n";
            if(string[0]=='S')
                start++;
            else
                ltime++;
        }
        cout << start << " " << ltime << "\n";
    }
    return 0;
}
