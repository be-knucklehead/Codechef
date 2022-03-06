#include <iostream>
using namespace std;
int main()
{
    int t, r, div;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> r;
        if (r < 1600)
        {
            div = 3;
        }
        else if (r >= 1600 && r < 2000)
        {
            div = 2;
        }
        else
            div = 1;
        cout << div << endl;
    }
    return 0;
}