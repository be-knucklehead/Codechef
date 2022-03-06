#include <iostream>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int time = n * m;
        cout << time << endl;
    }

    return 0;
}