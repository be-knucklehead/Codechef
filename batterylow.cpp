#include <iostream>
using namespace std;

int main(void) {
    int T, X;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X;
        if (X <= 15)
        {
            cout << "Yes\n";
        }
        else
        cout << "No\n";
    }
    return 0;
}