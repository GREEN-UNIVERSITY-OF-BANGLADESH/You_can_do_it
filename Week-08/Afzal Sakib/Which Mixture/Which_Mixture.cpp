#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,j;
     cin>>t;
    vector<vector<int>>num(t,vector<int>(2));

   for(i=0; i<t; i++)
   {
    for(j=0; j<2; j++)
    cin>>num[i][j];
   }

   for(i=0; i<t ;i++)
   {
       if(num[i][0]>0 && num[i][1]>0)
    cout<<"Solution\n";
    else if(num[i][0]==0 )
    cout<<"Liquid\n";
    else if( num[i][1]==0)
    cout<<"Solid\n";
   }

  return 0;
}