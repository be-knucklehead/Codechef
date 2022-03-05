#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        if (N % 10 == 0)
        {
            cout << N / 10 << endl;
        }
        else
            cout << N / 10 + 1 << endl;
    }
    return 0;
}