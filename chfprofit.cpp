#include <iostream>
using namespace std;
int main()
{
    int t, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        int profit = (z - y) * x;
        cout << profit << endl;
    }
    return 0;
}