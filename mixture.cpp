#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            cout << "Solution\n";
        }
        else if (b == 0)
        {
            cout << "Solid\n";
        }
        else if (a == 0)
        {
            cout << "Liquid\n";
        }
    }
    return 0;
}