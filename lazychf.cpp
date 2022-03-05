#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int T, x, m, d, result;
    cin >>T;
    for (int i = 0; i < T; i++)
    {
        cin >> x >> m>> d;
        result = min(x*m,x+d);
        cout << result << endl;
    }
    return 0;
}