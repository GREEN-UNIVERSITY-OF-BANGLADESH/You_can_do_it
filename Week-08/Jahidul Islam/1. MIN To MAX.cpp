    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/OPMIN
    // Language     : c++
    // Date         : 11/5/2023
    // Submission   : https://www.codechef.com/viewsolution/96117912
    #include <bits/stdc++.h>
    using namespace std;
    #define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    #define endl '\n'

    int main()
    {
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            int n;
            cin >> n;
            vector<int> a(n);
            
            for(int i = 0; i < n; i++){
                    cin >> a[i];
                }
            int mined = 0;
            int min = *min_element(a.begin(), a.end());
            for(int i = 0; i < n; i++){
                if(a[i] == min) mined++;
            }
            cout << n - mined << endl;
        }
   
        return 0;
    }
    