#include <iostream>
using namespace std;
int main()
{
    int t, a_min, b_min, c_min, t_min, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a_min >> b_min >> c_min >> t_min >> a >> b >> c;
        if (a >= a_min && b >= b_min && c >= c_min && a + b + c >= t_min)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}