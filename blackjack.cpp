#include <iostream>
using namespace std;

int main() {
    int T, A, B;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        int R = 21 - (A + B);
        if (R >= 0 && R <=10)
        {
            cout << R;
        }
        else
        cout << "-1";
    }
    return 0;
}