#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialization
    vector<int> vec;

    // Initialization with values
    vector<int> vec1 = {1, 2, 3, 4, 10};

    // Initialization of all elements with same values
    vector<int> vec2(7, 7);

    // Iterators over vector
    // for (int val : vec) {
    //     cout << val << " ";
    // }
    // cout << "\n";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << "\n";
    for (int val : vec2) {
        cout << val << " ";
    }
    cout << "\n";

    // Vector Functions
    cout << "Size of vec is: " << vec.size() << "\n";

    vec.push_back(1000);
    vec.push_back(100);
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    cout << "Size of vec is: " << vec.size() << "\n";

    vec.pop_back();
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    cout << "Size of vec is: " << vec.size() << "\n";

    vec.push_back(11);
    vec.push_back(20);
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";

    cout << "vec.front(): " << vec.front() << "\n";

    cout << "vec.back(): " << vec.back() << "\n";

    cout << "vec[1]: " << vec[1] << " vec.at(1): " << vec.at(1) << "\n";

    // vec.size() V/S vec.capacity()
    cout << vec.size() << " is vec.size()\n";
    cout << vec.capacity() << " is vec.capacity()\n";
    vec.push_back(7);
    vec.push_back(9);
    for (int val : vec) {
        cout << val << " ";
    }
    cout << "\n";
    cout << vec.size() << " is vec.size()\n";
    cout << vec.capacity() << " is vec.capacity()";
    return 0;
}