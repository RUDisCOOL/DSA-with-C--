#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Using C libraries
            // printf("%2c", ('A' + j % 26));

            // Using C++ libraries <iomanip>
            cout << setw(2) << char('A' + j % 26);
        }
        cout << endl;
    }

    return 0;
}
