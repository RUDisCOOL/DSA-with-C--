#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int i = 0, j = --size;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {4, 5, 1, 10, 2, 3, 6, 0};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}
