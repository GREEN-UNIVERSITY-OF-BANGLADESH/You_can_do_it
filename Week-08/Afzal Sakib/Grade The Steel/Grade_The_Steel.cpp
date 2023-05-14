#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
     cin>>t;
    vector<vector<float>>num(t,vector<float>(3));

   for(i=0; i<t; i++)
   {
    for(j=0; j<3; j++)
    cin>>num[i][j];

   }

   for(i=0; i<t; i++)
   {
       if(num[i][0]>50 && num[i][1]<0.7 && num[i][2]>5600)
       cout<<"10\n";
      else if(num[i][0]>50 && num[i][1]<0.7)
       cout<<"9\n";
     else if(num[i][1]<0.7 && num[i][2]>5600)
       cout<<"8\n";
       else if(num[i][0]>50 && num[i][2]>5600)
       cout<<"7\n";
       else if(num[i][0]>50 || num[i][1]<0.7 || num[i][2]>5600)
       cout<<"6\n";
       else
       cout<<"5\n";
       
   }
    
    
    return 0;
}