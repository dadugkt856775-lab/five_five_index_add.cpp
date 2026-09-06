#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> attendance;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int days;

        cout << "\nEnter student name: ";
        cin >> name;

        cout << "Enter present days: ";
        cin >> days;

        attendance[name] = days;
    }

    cout << "\n===== ATTENDANCE =====\n";

    for (auto &student : attendance) {
        cout << student.first
             << " : " << student.second
             << " days\n";
    }

    return 0;
}
