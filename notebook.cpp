#include <iostream>
using namespace std;

int main(void) {
    int T, N, pages, notebook;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        pages = N * 1000;
        notebook = pages / 100;
        cout << notebook << endl;
    }
    return 0;
}