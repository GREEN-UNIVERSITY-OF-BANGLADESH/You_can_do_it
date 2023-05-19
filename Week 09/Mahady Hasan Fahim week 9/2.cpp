#include<iostream>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,num=0,N=1010,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
           
        }



    int coun[N]={0};
    for(int i=0;i<n;i++){
        int tem=a[i];
        coun[tem]= coun[tem]+1;
    }
    int dex;
    for(int i=0;i<N;i++){
       
        if(coun[i]>num){
            num=coun[i];
            dex=i;


        }
        
    }
    for(int i=0;i<n;i++){
        if(a[i]!=dex){
            count++;
        }
       
       
        
    }

     cout<<count<<endl;


    

    }
    
 }
