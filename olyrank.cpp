#include <iostream>
using namespace std;
int main()
{
    int t, g1, s1, b1, g2, s2, b2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if (g1 * 5 + s1 * 3 + b1 > g2 * 5 + s2 * 3 + b2)
        {
            cout << "1\n";
        }
        else
            cout << "2\n";
    }

    return 0;
}