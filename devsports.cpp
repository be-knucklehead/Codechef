#include <iostream>
using namespace std;
int main()
{
    int t, z, y, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> z >> y >> a >> b >> c;
        if (z - y >= a + b + c)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}