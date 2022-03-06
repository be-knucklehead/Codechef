#include <iostream>
using namespace std;
int main()
{
    int t, m, s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> s;
        int n_loop = m / s;
        cout << n_loop << endl;
    }
}