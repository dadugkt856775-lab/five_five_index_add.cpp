#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    iota(v.begin(), v.end(), 1);

    cout << "Generated numbers: ";

    for (int x : v)
        cout << x << " ";

    reverse(v.begin(), v.end());

    cout << "\nReverse order: ";

    for (int x : v)
        cout << x << " ";

    return 0;
}
