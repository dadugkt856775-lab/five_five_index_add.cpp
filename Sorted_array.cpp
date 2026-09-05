#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    if (is_sorted(v.begin(), v.end()))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
