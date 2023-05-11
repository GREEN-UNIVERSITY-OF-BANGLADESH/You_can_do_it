#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int hrdness, strength;
        float carbon_cntn;
        cin >> hrdness >> carbon_cntn >> strength;

        int grade;

        if(hrdness > 50 && carbon_cntn < 0.7 && strength > 5600)
        {
            grade = 10;
        }
        else if(hrdness > 50 && carbon_cntn < 0.7)
        {
            grade = 9;
        }
        else if(carbon_cntn < 0.7 && strength > 5600)
        {
            grade = 8;
        }
        else if(hrdness > 50 && strength > 5600)
        {
            grade = 7;
        }
        else if(hrdness > 50 || carbon_cntn < 0.7 || strength > 5600)
        {
            grade = 6;
        }
        else
        {
            grade = 5;
        }
        cout << grade << "\n";
    }
    return 0;
}
