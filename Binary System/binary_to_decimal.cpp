#include <iomanip>
#include <iostream>
using namespace std;

        int binToDec(int n) {
            int dec = 0;
            for (int i = 1; n > 0; i *= 2) {
                dec += (n % 2) * i;
                n /= 10;
            }

            return dec;
        }

int main() {
    int bin = 1010;
    cout << binToDec(bin) << "\n";
    return 0;
}