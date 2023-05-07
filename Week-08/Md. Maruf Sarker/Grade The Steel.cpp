// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/FLOW014
// Language: cpp
// Date: 2022-12-03
// Difficulty Rating: 838

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double x, y, z;
        cin >> x >> y >> z;

        int grade = 0;

        if(x > 50) grade++;
        if(y < 0.7) grade++;
        if(z > 5600) grade++;

        if(grade == 3) cout << 10 << endl;
        else if(grade == 2 && x > 50 && y < 0.7) cout << 9 << endl;
        else if(grade == 2 && y < 0.7 && z > 5600) cout << 8 << endl;
        else if(grade == 2 && x > 50 && z > 5600) cout << 7 << endl;
        else if(grade == 1) cout << 6 << endl;
        else cout << 5 << endl;
    }
}