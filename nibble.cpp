#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        if (N%4 == 0)
        {
            cout << "Good\n";
        }
        else
        cout << "Not Good\n";
    }
    
}