#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {
        10, -4, 7, -8, 3, -2, 15, -6
    };

    stable_partition(v.begin(), v.end(),
                     [](int x) {
                         return x >= 0;
                     });

    cout << "Positive numbers first:\n";

    for (int x : v)
        cout << x << " ";

    return 0;
}
