#include<bits/stdc++.h>
using namespace std;
int main() {
    int m[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int tt; cin >> tt;
    while (tt--) {
        int a, b, sum = 0; cin>>a>> b;
        int sum_1 = a+b;
        while (sum_1> 0) {
            int num = sum_1% 10;
            sum += m[num];
            sum_1/= 10;
        }
        cout<< sum<<endl;
    }
}
