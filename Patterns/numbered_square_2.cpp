#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int p = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Using C libraries
            // printf("%2c", ('A' + p % 26));

            // Using C++ libraries <iomanip>
            cout << setw(2) << char('A' + p % 26);
            p++;
        }
        cout << endl;
    }

    return 0;
}