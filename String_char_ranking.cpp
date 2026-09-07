#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Character {
    char ch;
    int count;
};

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    vector<Character> v;

    for (char c = 'a'; c <= 'z'; c++) {
        int count = 0;

        for (char x : s) {
            if (x == c)
                count++;
        }

        if (count > 0)
            v.push_back({c, count});
    }

    sort(v.begin(), v.end(),
         [](const Character &a, const Character &b) {
             return a.count > b.count;
         });

    cout << "\nCharacter ranking:\n";

    for (auto &x : v)
        cout << x.ch << " -> " << x.count << endl;

    return 0;
}
