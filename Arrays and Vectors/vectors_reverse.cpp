#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr) {
    for (int i = 0; i < arr.size() / 2; i++) {
        int a = arr[i];
        int b = arr[arr.size() - 1 - i];
        int temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = temp;
    }
}

int main() {
    vector<int> vec = {-2, 3, 5, 10, 8, -7, 1};
    reverse(vec);
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}