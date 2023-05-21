#include<bits/stdc++.h>
using namespace std;
int Sum(vector <int> a, int start, int end) {
    int s = 0;
    for (int i = start; i < end; i++) {
        s += a[i];
    }
    return s;
}
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, size;
        cin >> n >> size;
        vector<int> a(n);
        for (int i  = 0; i < n; i++) {
            cin >> a[i];
        }
        int temp = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {   if (size + i > n) {
                sum = Sum(a, i, n);
                break;
            } else {
                sum = Sum(a, i, size + i);
                if (temp < sum) temp = sum;
            }
        }
        cout << temp << endl;
    }
}

