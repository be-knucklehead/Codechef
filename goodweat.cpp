#include <iostream>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int sunny = 0, rainy = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> a;
            if (a == 1)
            {
                sunny++;
            }
            else
                rainy++;
        }
        if (sunny > rainy)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}