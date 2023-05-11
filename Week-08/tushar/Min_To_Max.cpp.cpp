#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // for(int i =0;i < t;++i)
    while(t--)
    {
        int x;
        cin >> x;
        int arr[x], mn, count = 0;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        mn = *min_element(arr, arr + x);
        for (int i = 0; i < x; i++)
        {
            if (arr[i] > mn)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}