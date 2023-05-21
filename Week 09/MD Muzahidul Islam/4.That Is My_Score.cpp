#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, count = 0;cin>>n;
        map <int , int> m;
        vector<pair<int , int>> v;
        for(int i = 0; i< n; i++){
            int x, y;
            cin>>x>>y;
            if(x<9)
            v.push_back(make_pair(x,y)); 
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        for(auto &p:v){
            m.insert(make_pair(p.first, p.second)); 
          }
        for(auto &p:m){
            count +=p.second;
        }
          cout<<count<<endl;
        }
}

