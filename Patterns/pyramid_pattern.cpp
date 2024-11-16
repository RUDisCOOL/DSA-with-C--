#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << setw(3) << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << setw(3) << j + 1;
        }
        for (int j = 0; j < i; j++) {
            cout << setw(3) << i - j;
        }
        cout << endl;
    }

    return 0;
}