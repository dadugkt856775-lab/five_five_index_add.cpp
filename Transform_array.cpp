#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> result(v.size());

    transform(v.begin(), v.end(), result.begin(),
              [](int x) {
                  return x * x;
              });

    cout << "Squared values: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}
