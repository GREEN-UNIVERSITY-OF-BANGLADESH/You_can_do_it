#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N ;
        cin>>N;
        int A[N];
        for(int i = 0; i< N; i++){
            cin>>A[i];
        }
            int count = 0;
            sort(A, A+N);
            int MIN = A[0];
            for(int i = 1; i< N; i++){
                if(A[i] > MIN){
                    count++;
                }
            }
            cout<<count;
            cout<<endl;
    }
}