#include <iostream>
using namespace std;
int main() {
    char eye_1,eye_2;
    cin >> eye_1 >> eye_2;
    if (eye_1 == 'R' || eye_2 == 'R')
    {
        cout << "R\n";
    }
    else if (eye_1 == 'B' || eye_2 == 'B')
    {
        cout << "B\n";
    }
    else if (eye_1 == 'G' && eye_2 == 'G')
    {
        cout << "G\n";
    }
    return 0;
}