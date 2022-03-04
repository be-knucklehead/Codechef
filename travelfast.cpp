#include <iostream>
using namespace std;

int main() {
    int T, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;

        if (X <= Y)
        {
            if (X == Y)
            {
                cout << "SAME\n";
            }
            else
            cout << "BIKE\n";
        }
        else
        cout << "CAR\n";
    }
    return 0;
}