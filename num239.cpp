#include <iostream>
using namespace std;
int main()
{
    int t, l, r;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> l >> r;
        for (int j = l; j < r + 1; j++)
        {
            if (j % 10 == 2 || j % 10 == 3 || j % 10 == 9)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}