#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

bool isPrime(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << (isPrime(n) ? " is " : " is not ") << "a prime number!" << endl;
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