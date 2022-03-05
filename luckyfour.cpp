#include <iostream>
using namespace std;

int main()
{
    int T, n, r;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int count = 0;
        cin >> n;
        do
        {
            r = n % 10;
            n = n / 10;
            if (r == 4)
            {
                count++;
            }

        } while (n != 0);
        cout << count << endl;
    }
    return 0;
}