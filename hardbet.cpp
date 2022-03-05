#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        int r = min(a, b);
        int rf = min(r, c);
        if (rf == a)
        {
            cout << "Draw" << endl;
        }
        if (rf == b)
        {
            cout << "Bob" << endl;
        }
        if (rf == c)
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}