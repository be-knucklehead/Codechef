#include <iostream>
using namespace std;
int main() {
    int t, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        if (x+y > z)
        {
            cout << "Train\n";
        }
        else if (x+y < z)
        {
            cout << "PlaneBus\n";
        }
        else
        cout << "Equal\n";
    }
    
}