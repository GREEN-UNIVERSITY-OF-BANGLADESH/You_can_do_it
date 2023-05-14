#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,i,j,countt;
    cin>>testcase;
    vector<vector<int>>number(testcase,vector<int>(2));
    for(i=0; i<testcase; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>number[i][j];
        }
    }

    for(i=0; i<testcase; i++)
    {
        countt=0;
        for(j=number[i][0]; j<=number[i][1]; j++)
        {
           
            if(j%10==2 || j%10==3 || j%10==9)
           countt++;
        }
        cout<<countt<<endl;
    }
}