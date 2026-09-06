#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, double> expense;
    int n;

    cout << "Enter number of expenses: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string category;
        double amount;

        cout << "\nEnter category: ";
        cin >> category;

        cout << "Enter amount: ";
        cin >> amount;

        expense[category] += amount;
    }

    double total = 0;

    cout << "\n===== EXPENSE REPORT =====\n";

    for (auto &e : expense) {
        cout << e.first << " : ₹" << e.second << endl;
        total += e.second;
    }

    cout << "\nTotal Expense = ₹" << total;

    return 0;
}
