#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,testcase,j;
    cin>>testcase;
    int result[testcase][2]={0};
    vector<int>words(testcase);
    string sentence[testcase];
    
    for(i=0; i<testcase; i++)
    {
        cin>>words[i];
        cin.ignore();
        getline(cin, sentence[i]);
       
        for(j=0; j<sentence[i].size(); j++)
        {
           // cout<<sentence[i][j]<<"Tis isi teat\n";
            if(sentence[i][j]=='S')
            {
                result[i][0]++;
                j+=7;
            } 
            else if(sentence[i][j]=='L') 
            {
                result[i][1]++;
                j+=8;
            }  
        }
    }

    for(i=0; i<testcase; i++)
    {
        for(j=0; j<2; j++)
        cout<<result[i][j]<<" ";
        cout<<endl;
    }
}