    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/PROC18A
    // Language     : c++
    // Date         : 20/5/2023
    // Submission   : https://www.codechef.com/viewsolution/96583917
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    int main()
    {
        int t;
        cin >> t;
        cin.ignore();
        while (t--)
        {
            int n, k;
            cin>> n>> k;
            vector<int> v;
            for(int i=0; i<n; i++){
                int x;
                cin>>x;
                v.push_back(x);
            }
            int max = 0;
                for (int i = 0; i <= n - k; i++) {
                    int sum = 0;
                    
                    for (int j = i; j < i + k; j++) {
                        sum += v[j];
                        
                    }
                    max = std::max(max, sum);
                }
            cout << max << endl;
              
        }   
        return 0;
    }
    