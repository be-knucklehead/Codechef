#include <iostream>
using namespace std;

int main(void) {
    int T, A, B, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin  >> A >> B >> X >> Y;
        if (A*B <= X*Y)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        
    }
    return 0;
}