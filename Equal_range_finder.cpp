#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 20, 30, 40, 50};

    int key;
    cout << "Enter element: ";
    cin >> key;

    auto range = equal_range(v.begin(), v.end(), key);

    cout << "Count = " << range.second - range.first << endl;

    return 0;
}
