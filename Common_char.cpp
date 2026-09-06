#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string a, b;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    set<char> s1(a.begin(), a.end());
    set<char> s2(b.begin(), b.end());

    cout << "Common characters: ";

    for (char c : s1) {
        if (s2.count(c))
            cout << c << " ";
    }

    return 0;
}
