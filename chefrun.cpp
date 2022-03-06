#include <iostream>
using namespace std;
int main()
{
    float t, x1, x2, x3, v1, v2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        if ((x3 - x1) / v1 < (x2 - x3) / v2)
        {
            cout << "Chef\n";
        }
        else if ((x3 - x1) / v1 > (x2 - x3) / v2)
        {
            cout << "Kefa\n";
        }
        else
            cout << "Draw\n";
    }
    return 0;
}