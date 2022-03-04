#include <iostream>
using namespace std;

int main(){
    int T, X, A, B;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> A >> B;
        if (X <= 1*A + 2*B)
        {
            cout << "Qualify\n";
        }
        else
        cout << "Not Qualify\n";
    }
    return 0;
}