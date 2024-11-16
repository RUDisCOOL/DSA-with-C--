#include <iostream>
using namespace std;

bool isNumberUnique(int num, int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        if ((temp == num) && (++count > 1)) {
            return false;
        }
    }
    return true;
}

void printUniqueNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        if (isNumberUnique(num, arr, size)) {
            cout << num << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 4, 5, 6, 8, 7, 100};
    int size = sizeof(arr) / sizeof(int);
    printUniqueNumbers(arr, size);

    return 0;
}