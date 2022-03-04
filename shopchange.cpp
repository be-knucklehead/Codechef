#include <iostream>
using namespace std;

int main(void) {
    int T, X;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X;
        int R = 100 - X;
        cout << R;
    }
    return 0;
}