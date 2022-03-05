#include <iostream>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int total = 0;
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            int age;
            cin >> age;
            if (age >= 10 && age <= 60)
            {
                total++;
            }
        }
        cout << total << endl;
    }
    return 0;
}