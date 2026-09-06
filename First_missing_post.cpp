#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    set<int> numbers;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 0)
            numbers.insert(x);
    }

    int answer = 1;

    while (numbers.count(answer))
        answer++;

    cout << "First missing positive number = "
         << answer;

    return 0;
}
