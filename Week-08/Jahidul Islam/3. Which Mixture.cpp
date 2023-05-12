    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/MIXTURE
    // Language     : c++
    // Date         : 11/5/2023
    // Submission   : https://www.codechef.com/viewsolution/94103979
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    int main()
    {
        optimize();
        int t;
        cin >> t;
        while(t--){
            int a, b;
            cin >> a>>b;
            if( a >0 && b>0 ) cout<<"Solution"<<endl;
            if( a==0 ) cout<<"Liquid"<<endl;
            if( b==0 ) cout<<"Solid"<<endl;
        }
        return 0;
    }
    