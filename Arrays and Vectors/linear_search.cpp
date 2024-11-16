#include <iostream>
using namespace std;

int search(int n, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 1, 2, 3, 6, 0};
    int size = sizeof(arr) / sizeof(int);
    int n = 10;
    int index = search(n, arr, size);
    if (index > -1) {
        cout << "The number is found at index: " << index;
    } else {
        cout << "Number not found!";
    }
    return 0;
}
