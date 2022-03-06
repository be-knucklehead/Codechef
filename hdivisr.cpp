#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, r;
    cin >> n;
    do
    {
        if (n % i == 0)
        {
            r = i;
        }
        i++;
    } while (i < 10);
    cout << r << endl;
    return 0;
}