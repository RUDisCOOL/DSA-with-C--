#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

bool isPrime(int n);

int main() {
    int n = 200000000;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\n"
         << count << "\n";
    return 0;
}

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // cout << " " << i << " ";
            return false;
        }
    }
    return true;
}