#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int T, A, B, C, min1, min2, total;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> C;
        min1 = min(A, B);
        min2 = min(min1, C);
        total = A + B + C - min2;
        cout << total << endl;
    }
    return 0;
}