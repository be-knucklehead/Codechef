#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int T, X1, X2, Y1, Y2;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X1 >> Y1 >> X2 >> Y2;
        int result = max(abs(X1 - X2), abs(Y1 - Y2));
        cout << result << endl;
    }
    return 0;
}