#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {
        1, 1, 2, 2, 2, 3,
        4, 4, 5, 5, 5, 6
    };

    auto last = unique(v.begin(), v.end());

    v.erase(last, v.end());

    cout << "After removing consecutive duplicates:\n";

    for (int x : v)
        cout << x << " ";

    return 0;
}
