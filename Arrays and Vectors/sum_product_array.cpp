#include <iostream>
using namespace std;

struct Numbers {
    int sum;
    int prod;
};

Numbers sum_prod(int arr[], int size) {
    int sum = 0;
    int prod = size > 0 ? 1 : 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        prod *= arr[i];
    }

    return {sum, prod};
}

int main() {
    int arr[] = {1, 15, 20, 30};
    int size = sizeof(arr) / sizeof(int);
    Numbers n = sum_prod(arr, size);
    int sum = n.sum;
    int prod = n.prod;
    cout << "sum = " << sum << "\nprod = " << prod;
    return 0;
}