#include <iostream>
using namespace std;
int main()
{
    int t, m, h;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> h;
        int BMI = m / (h * h);
        if (BMI <= 18)
        {
            cout << "1\n";
        }
        else if (BMI >= 19 && BMI <= 24)
        {
            cout << "2\n";
        }
        else if (BMI >= 25 && BMI <= 29)
        {
            cout << "3\n";
        }
        else
            cout << "4\n";
    }
    return 0;
}