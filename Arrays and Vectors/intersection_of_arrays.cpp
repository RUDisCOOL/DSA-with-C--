#include <iostream>
using namespace std;

bool isPresent(int num, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        if (num == temp)
            return true;
    }
    return false;
}

void printCommonNumbers(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i < size1; i++) {
        int temp = arr1[i];
        if (isPresent(temp, arr2, size2)) {
            cout << temp << " ";
        }
    }
}

int main() {
    int arr1[] = {0, 1, 2, 3, 4, -1, -2, -2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {-1, 5, 6, 3, 2,-2};
    int size2 = sizeof(arr2) / sizeof(int);
    printCommonNumbers(arr1, size1, arr2, size2);

    return 0;
}