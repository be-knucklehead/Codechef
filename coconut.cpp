#include <iostream>
using namespace std;
int main()
{
    int t, xa, xb, Xa, Xb;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> xa >> xb >> Xa >> Xb;
        int total = (Xa / xa) + (Xb / xb);
        cout << total << endl;
    }
    return 0;
}