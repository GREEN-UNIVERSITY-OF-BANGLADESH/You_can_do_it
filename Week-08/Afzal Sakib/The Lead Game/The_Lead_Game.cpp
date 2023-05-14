#include<bits/stdc++.h>
using namespace std;
void changes(vector<vector<int>> &num, int i)
{
   num[i+1][0] = num[i][0] + num[i+1][0];
   num[i+1][1] = num[i][1] + num[i+1][1];
}

int main()
{
    int i,j,t;
    cin>>t;
    vector<vector<int>>num(t,vector<int>(2));
    vector<vector<int>>n(2,vector<int>(t,0));
    for(i=0; i<t; i++)
    {
        for(j=0; j<2; j++)
        cin>>num[i][j];
    }
    for(i=0; i<t; i++)
    {
        if(i!=(t-1))
        {
          if(num[i][0]>num[i][1])
          {
               n[0][i] = 1;
               n[1][i] =  num[i][0] - num[i][1];
               changes(num,i);      //change the comulative sum
          }
          else if(num[i][0] < num[i][1])
          {
               n[0][i] = 2;
               n[1][i] =  num[i][1] - num[i][0];
              changes(num,i);
          }
          else
          {
               n[0][i] = 0;
               n[1][i] = 0;
              changes(num,i);
          }
        }
    }
   
   int max = *max_element(n[1].begin(),n[1].end());     //find maximum
   
    int index = find(n[1].begin(),n[1].end(),max) - n[1].begin();  // find maximum value index
    cout<<n[0][index]<<" "<<max;
}
