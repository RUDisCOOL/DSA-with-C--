#include <iomanip>
#include <iostream>
using namespace std;

bool isPowOfTwo(int n) {
    if ((n & (n - 1)) == 0) {
        return true;
    }
    return false;
}

int main() {
    int num = 64;
    cout << num << (isPowOfTwo(num) ? " is a power of 2" : " is not a power of 2") << "\n";
    return 0;
}