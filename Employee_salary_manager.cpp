#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, pair<string, double>> employees;
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id;
        string name;
        double salary;

        cout << "\nEmployee ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Salary: ";
        cin >> salary;

        employees[id] = {name, salary};
    }

    cout << "\n===== EMPLOYEE DETAILS =====\n";

    for (auto &e : employees) {
        cout << "ID: " << e.first
             << " | Name: " << e.second.first
             << " | Salary: ₹" << e.second.second << endl;
    }

    return 0;
}
