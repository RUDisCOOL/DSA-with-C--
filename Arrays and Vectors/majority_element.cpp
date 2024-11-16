#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr) {
    //* BRUTE FORCE APPROACH
    // int n = arr.size();
    // for (int val : arr) {
    //     int count = 0;
    //     for (int ele : arr) {
    //         if (val == ele) {
    //             count++;
    //         }
    //     }
    //     if (count > n / 2) {
    //         return val;
    //     }
    // }
    // return -1;

    //* OPTIMIZED BY SORTING
    // sort(arr.begin(), arr.end());
    // // for (int val : arr) {
    // //     cout << val << " ";
    // // }
    // // cout << "\n";
    // int n = arr.size();
    // int count = 0;
    // int prev = arr[0];
    // for (int val : arr) {
    //     if (prev == val) {
    //         count++;
    //     } else {
    //         prev = val;
    //         count = 1;
    //     }
    //     // cout << count << " ";
    //     if (count > n / 2) {
    //         return val;
    //     }
    // }
    // return -1;

    //* MOORE'S VOTING ALGORITHM
    int n = arr.size();
    int result = arr[0];
    int count = 0;
    for (int val : arr) {
        if (count == 0) {
            result = val;
        }
        if (result == val) {
            count++;
        } else {
            count--;
        }
    }
    if (count > 0) {
        return result;
    } else {
        return -1;
    }
}

int main() {
    vector<int> arr = {3, 3, 3, 3, 1, 3, 2, 1, 2, 3};
    cout << majorityElement(arr);
    return 0;
}