#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num, temp, reverse = 0;
        cin >> num;
        temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        if ( reverse == num ) {
            cout << "wins" << endl;
        } else {
            cout << "loses" << endl;
        }
    }
    return 0;
}