#include <iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x >= 1 && x < 100)
        {
            cout << "Easy\n";
        }
        if (x >= 100 && x < 200)
        {
            cout << "Medium\n";
        }
        if (x >= 200 && x <= 300)
        {
            cout << "Hard\n";
        }
    }
    return 0;
}