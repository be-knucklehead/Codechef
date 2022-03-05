#include <iostream>
using namespace std;

int main() {
    int T, N, X, P;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> X >> P;
        int total = (X*3) - (N-X);
        if (total >= P)
        {
            cout << "Pass";
        }
        else
        cout << "Fail";
    }
    return 0;
}