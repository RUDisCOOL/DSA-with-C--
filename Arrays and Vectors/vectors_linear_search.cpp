#include <iostream>
#include <vector>
using namespace std;

bool search(int num, vector<int> &arr) {
    for (int val : arr) {
        if (val == num) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, -5, -6, 4, 8, 7, 10, 2, 4, 5};
    int num = 9;
    cout << search(num, arr);
}