#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            // Using C
            // printf("%c", 'A' + j);

            // Using C++
            cout << setw(2) << char('A' + j % 26);
        }
        cout << endl;
    }

    return 0;
}