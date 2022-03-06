#include <iostream>
using namespace std;
int main()
{
    int t, x, y, xr, yr, d;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> xr >> yr >> d;
        int fd = min(x / xr, y / yr);
        if (fd >= d)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}