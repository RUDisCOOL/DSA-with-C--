// SUBARRAY SUM PROBLEM
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int> &arr) {
    int size = arr.size();
    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++) {
        int currentSum = 0;
        for (int end = start; end < size; end++) {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int kadanesAlgo(vector<int> &arr) {
    int size = arr.size();
    int currentSum = 0, maxSum = INT_MIN;
    for (int val : arr) {
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    // cout << subarraySum(vec);
    
    // Best approach
    cout << kadanesAlgo(vec);
    return 0;
}