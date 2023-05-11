#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
        vector <pair<int, int>> v;
        for(int i = 0; i< t;i++){
            int a, b;
            cin>>a>>b;
            v.push_back(make_pair(abs(a-b), (a>=b)?1:2));
        }

        sort(v.begin(), v.end());
        cout<< v[t-1].second << " "<< v[t-1].first;
    }