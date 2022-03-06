#include <iostream>
using namespace std;
int main()
{
    int t, x, y, rooms;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (y == 0)
        {
            rooms = x - y;
        }
        else if (x - y == 0)
        {
            rooms = 2 * y - 1;
        }
        else
            rooms = x - y + 2 * y;
        cout << rooms << endl;
    }

    return 0;
}