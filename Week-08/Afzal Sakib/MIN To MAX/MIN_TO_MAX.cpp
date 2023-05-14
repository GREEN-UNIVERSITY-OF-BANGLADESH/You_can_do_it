#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t,i,j,x;
     cin>>t;
    vector<vector<int>>num(t);
    vector<int>size, min(t),countt(t);

     for(i=0; i<t; i++)
     {
        cin>>x;
        size.push_back(x);
        for(j=0; j<size[i]; j++)
        {
           cin>>x;
           num[i].push_back(x);
        }  
        min[i] = *min_element(num[i].begin(), num[i].end());
     }

    for(i=0 ;i<t ;i++)
    {
        for(j=0; j<size[i]; j++)
        {
           if(min[i]<num[i][j])
           countt[i]++;
        }
        cout<<countt[i]<<endl;
    }

   return 0;
       
}

