#include <iostream>
using namespace std;
int main()
{
    int t, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        if (x + y <= z)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}