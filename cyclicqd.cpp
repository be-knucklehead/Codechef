#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, D;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> C >> D;
        if (A + B + C + D == 360 && A + C == 180 && B + D == 180)
        {
            cout << "YES\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}