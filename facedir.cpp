#include <iostream>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x % 4 == 0)
        {
            cout << "NORTH\n";
        }
        else if (x % 4 == 1)
        {
            cout << "EAST\n";
        }
        else if (x % 4 == 2)
        {
            cout << "SOUTH\n";
        }
        else
        {
            cout << "WEST\n";
        }
    }
    return 0;
}