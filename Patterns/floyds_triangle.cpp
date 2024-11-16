#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int p = 1;
    int maxDigits = floor(log10(n * (n + 1) / 2) + 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << setw(maxDigits + 1) << p++;
        }
        cout << endl;
    }
    return 0;
}