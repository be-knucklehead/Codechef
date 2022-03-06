#include <iostream>
using namespace std;
int main()
{
    int t, n, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> x >> y;
        if ((n + 1) * y >= x)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}