#include <iostream>
#include <vector>
using namespace std;

int countStairs(int n) {

    // # BOTTOM-UP OPTIMIZED APPROACH WITH O(1) meaning CONSTANT SPACE COMPLEXITY
    int one = 1;
    int two = 1;
    for (int i = 2; i <= n; i++) {
        one = one + two;
        two = one - two;
    }
    return one;

    // * BOTTOM-UP TABULATION APPROACH
    // // ? Base case for 0 is 1 meaning that if we are currently at the target step then there is only 1 way to reach there
    // // ? Base case fot 1 is also 1 meaning that if we were currently one step behind our target step then there is only 1 way to reach target
    // static vector<int> dp = {1, 1};
    // if (dp.size() <= n)
    //     for (int i = dp.size(); i <= n; i++)
    //         dp.push_back(dp[i - 1] + dp[i - 2]);
    // return dp[n];

    // * TOP-DOWN MEMOIZATION APPROACH
    // // ? Base case for 0 is 1 meaning that if we are currently at the target step then there is only 1 way to reach there
    // // ? Base case fot 1 is also 1 meaning that if we were currently one step behind our target step then there is only 1 way to reach target
    // static vector<int> dp = {1, 1};
    // if (dp.size() <= n)
    //     dp.push_back(countStairs(n - 1) + countStairs(n - 2));
    // return dp[n];

    // ! SLOWEST RECURSION APPROACH
    // if (n <= 1) {
    //     return 1;
    // }
    // return countStairs(n - 1) + countStairs(n - 2);
}

int main() {
    int n = 5;
    cout << countStairs(n);

    return 0;
}