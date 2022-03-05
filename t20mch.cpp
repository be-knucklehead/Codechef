#include <iostream>
using namespace std;

int main()
{
    int R, O, C;
    cin >> R >> O >> C;
    if ((20 - O) * 36 + C > R)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
    return 0;
}