#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << setw(2) << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << setw(2) << i + 1;
        }
        cout << endl;
    }

    return 0;
}