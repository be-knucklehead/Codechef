#include <iostream>
using namespace std;

int main() {
    int T, X, Y, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
    cin >> X >> Y;
    N = X/Y;
    cout << N << endl;   
    }
    
    return 0;
}