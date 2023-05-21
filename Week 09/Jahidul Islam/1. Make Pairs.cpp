    // Writter      : @JahidulZaid
    // Problem Link : https://www.codechef.com/problems/PAIREQ
    // Language     : c++
    // Date         : 19/5/2023
    // Submission   : 
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
            int n;
            cin>>n;
            int a[n];
            int f[1001];
            for (int i = 0; i < n; i++)
            {
                cin>>a[i];
                f[a[i]]++;
            }
            int s = sizeof(a)/ sizeof(a[0]);
            sort(a, a+s);
            cout<< n-a[1001] <<endl;
            
        }
        
        
   
        return 0;
    }
    