#include <iostream>
using namespace std;
int main()
{
    int t, a, b, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> x;
        int total = (b - a) / x;
        cout << total << endl;
    }
    return 0;
}