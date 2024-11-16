#include <iostream>
#include <vector>
using namespace std;

unsigned fib(unsigned n) {

    // # DYNAMIC PROGRAMMING BOTTOM-UP TABULATION APPROACH
    static vector<unsigned> sol = {0, 1};
    // ? If the solution does not exist in the sol array then:-
    if (sol.size() <= n)
        for (unsigned i = sol.size(); i <= n; i++)
            sol.push_back(sol[i - 1] + sol[i - 2]);
    return sol[n];

    // * DYNAMIC PROGRAMMING TOP-DOWN MEMOIZATION APPROACH
    // static vector<unsigned > sol = {0, 1};
    // // ? If the solution does not exist in the sol array then:-
    // if (sol.size() <= n)
    //     sol.push_back(fib(n - 1) + fib(n - 2));
    // return sol[n];

    // * DYNAMIC PROGRAMMING BOTTOM-UP OPTIMIZED FOR SPECIAL USE CASE: If we need to find the fibonacci only a few times
    // if (n < 2)
    //     return n;
    // unsigned prev = 0, current = 1;
    // for (unsigned i = 2; i <= n; i++) {
    //     current = current + prev;
    //     prev = current - prev;
    // }
    // return current;

    // ! SLOWEST RECURSIVE APPROACH
    // if (n < 2)
    //     return n;
    // return fib(n - 1) + fib(n - 2);
}

int main() {
    unsigned n = 47; // # MAXIMUM VALUE CAN BE 47 IF USING AN UNSIGNED INT
    for (unsigned i = 0; i <= n; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}