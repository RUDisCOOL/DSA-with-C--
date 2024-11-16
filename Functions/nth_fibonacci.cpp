#include <iostream>
using namespace std;

int nthFibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        int temp = b;
        b += a;
        a = temp;
    }
    return a;
}

int main() {
    int n = 5;
    cout << nthFibonacci(n) << "\n";

    return 0;
}
