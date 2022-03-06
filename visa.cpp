#include <iostream>
using namespace std;
int main()
{
    int t, x1, x2, y1, y2, z1, z2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        if (x1 <= x2 && y1 <= y2 && z1 >= z2)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}