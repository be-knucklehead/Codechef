#include <iostream>
using namespace std;
int main()
{
    int t, p;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> p;
        int serve = p / 2 + 1;
        cout << serve << endl;
    }
    return 0;
}