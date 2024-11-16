#include <climits>
#include <iostream>
using namespace std;

struct Index {
    int smallest_index;
    int largest_index;
};

Index largeSmall(int arr[], int size) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = 0;
    int largest_index = 0;
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        if (smallest > temp) {
            smallest_index = i;
            smallest = temp;
        }
        if (largest < temp) {
            largest_index = i;
            largest = temp;
        }
    }
    return {smallest_index, largest_index};
}

int main() {
    int n[] = {0, 5, -5, 3, 4, 15, 20, 30, 40, 50, -100};
    int size = sizeof(n) / sizeof(int);
    Index temp = largeSmall(n, size);
    int smallest = n[temp.smallest_index];
    int largest = n[temp.largest_index];
    cout << "Smallest in the array: " << smallest << " at index " << temp.smallest_index << "\n";
    cout << "Largest in the array: " << largest << " at index " << temp.largest_index;

    return 0;
}