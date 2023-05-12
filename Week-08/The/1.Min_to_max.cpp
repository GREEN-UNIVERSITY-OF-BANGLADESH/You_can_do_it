#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ln[n], m = 101;
        for (int i = 0; i < n; i++)
        {
            cin >> ln[i];
            m = min(m, ln[i]);
        }
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result += ln[i] - m;
        }
        cout << result << endl;
    }
    return 0;
}
