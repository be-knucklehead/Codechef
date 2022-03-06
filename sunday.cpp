#include <iostream>
using namespace std;
int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        int holidays = 8;
        cin >> n;
        while (n--)
        {
            cin >> a;
            holidays++;
            if ((a + 1) % 7 == 0 || a % 7 == 0)
            {
                holidays--;
            }
        }
        cout << holidays << endl;
    }

    return 0;
}