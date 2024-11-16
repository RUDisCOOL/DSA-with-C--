#include <iomanip>
#include <iostream>
using namespace std;

int decToBin(int n) {
    int bin = 0;
    // With While loop
    // int i = 1; while (n > 0) {     bin = bin + (n % 2) * i;     n /= 2;     i *= 10; }

    // With For loop
    for (int i = 1; n > 0; i *= 10) {
        bin += (n % 2) * i;
        n /= 2;
    }

    return bin;
}

int main() {
    int dec = 14;
    cout << decToBin(dec) << "\n";
    return 0;
}