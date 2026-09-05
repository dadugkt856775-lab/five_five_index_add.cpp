#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    stack<string> st;
    string word;

    while (ss >> word)
        st.push(word);

    cout << "Reversed sentence: ";

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
