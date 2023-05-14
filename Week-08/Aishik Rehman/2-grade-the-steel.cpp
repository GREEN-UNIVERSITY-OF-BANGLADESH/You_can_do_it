#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        float hardness, carbon, tensile;
        cin >> hardness >> carbon >> tensile;
        int grade = 5; 
        if (hardness>50 && carbon<0.7 && tensile>5600){
            grade = 10;
        } 
        else if (hardness>50 && carbon<0.7){
            grade = 9;
        } else if (carbon<0.7 && tensile>5600){
            grade = 8;
        } else if (hardness>50 && tensile>5600){
            grade = 7;
        } else if (hardness>50 || carbon<0.7 || tensile>5600){
            grade = 6;
        }
        cout << "The steel grade is " << grade << endl;
    }
    return 0;
}
