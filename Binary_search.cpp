#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 60, 70};

    int key;
    cout << "Enter element: ";
    cin >> key;

    if (binary_search(v.begin(), v.end(), key))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
