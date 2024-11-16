#include <climits>
#include <iostream>
#include <vector>
using namespace std;

struct Pair {
    int a;
    int b;
};

Pair sumOfPair(vector<int> &arr, int sum) {
    // BRUTE FORCE TECHNIQUE
    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = i + 1; j < arr.size(); j++) {
    //         if (arr[i] + arr[j] == sum) {
    //             return {i, j};
    //         }
    //     }
    // }

    // TWO POINTER APPROACH

    int i = 0, j = arr.size() - 1;
    while (i < j) {
        int pairSum = arr[i] + arr[j];
        if (pairSum > sum) {
            j--;
        } else if (pairSum < sum) {
            i++;
        } else {
            return {i, j};
        }
    }

    return {-1, -1};
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int sum = 13;
    Pair result = sumOfPair(vec, sum);
    cout << vec.at(result.a) << "\t" << vec.at(result.b);
    return 0;
}