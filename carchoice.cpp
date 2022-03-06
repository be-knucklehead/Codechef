#include <iostream>
using namespace std;
int main()
{
    float t, x1, x2, y1, y2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        if (x1 / y1 > x2 / y2)
        {
            cout << "-1\n";
        }
        else if (x1 / y1 == x2 / y2)
        {
            cout << "0\n";
        }
        else
            cout << "1\n";
    }
    return 0;
}