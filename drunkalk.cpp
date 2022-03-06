#include <iostream>
using namespace std;
int main()
{
    int t, k, total;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        total = 0;
        for (int j = 1; j < k + 1; j++)
        {
            if (j % 2 == 1)
            {
                total += 3;
            }
            else
                total -= 1;
        }
        cout << total << endl;
    }
    return 0;
}