    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/PAIREQ
    // Language     : c++
    // Date         : 18/5/2023
    // Submission   : https://www.codechef.com/viewsolution/96511524
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
            int n; cin>> n;
            string s, r;
            cin >> s>> r; 
            int mined1=0, mined2=0;
            
            for (int i = 0; i<n; i++){
                if (s[i]=='1'){
                    mined1++;
                }
                if (r[i]=='1'){
                    mined2++;
                    
                }
                
            }
            
            if(mined2 == mined1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
        
   
        return 0;
    }