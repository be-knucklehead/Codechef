#include <iostream>
using namespace std;
int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        int n_chaat = min(x / 2, y);
        cout << n_chaat << endl;
    }
    return 0;
}