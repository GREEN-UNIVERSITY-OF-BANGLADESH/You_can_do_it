#include<iostream>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,max,min,num=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            min=max=a[0];
            if(a[i]>max){
                max=a[i];

            }if(a[i]<min){
                min=a[i];
            }
        }



    int coun[max+1]={0};
    for(int i=0;i<n;i++){
        int tem=a[i];
        coun[tem]= coun[tem]+1;
    }
    for(int i=0;i<max+1;i++){
       
        if(coun[i]>num){
            num=coun[i];
        }
        
    }
     cout<<n-num<<endl;


    

    }
    
 }
