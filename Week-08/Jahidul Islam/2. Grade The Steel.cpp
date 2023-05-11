    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/FLOW014
    // Language     : c++
    // Date         : 11/5/2023
    // Submission   : https://www.codechef.com/viewsolution/96119448
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'
    #define nn int n; cin >> n

    int main()
    {
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            double h,cc, ts;
            cin>> h>> cc>> ts;
            
            int g = 0;
            if(h>50) g++;
            if( cc< 0.7) g++;
            if (ts>5600) g++;
            
            if(g == 3) cout<< 10 << endl;
            else if(g == 2 && h> 50 && cc<0.7) cout<< 9 << endl;
            else if(g == 2 && cc<0.7 && ts>5600) cout<< 8 << endl;
            else if(g == 2 && h> 50 && ts>5600) cout<< 7 << endl;
            else if(h> 50 || cc<0.7 || ts>5600) cout<<6<< endl;
            else cout<< 5 << endl;
        }
        return 0;
    }
    