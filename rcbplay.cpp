#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y >> Z;
        if (X + 2 * Z >= Y)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}