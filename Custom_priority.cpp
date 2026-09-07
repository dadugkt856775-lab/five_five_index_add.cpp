#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Patient {
    string name;
    int severity;

    bool operator<(const Patient &other) const {
        return severity < other.severity;
    }
};

int main() {
    priority_queue<Patient> patients;
    int n;

    cout << "Enter number of patients: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Patient p;

        cout << "\nPatient name: ";
        cin >> p.name;

        cout << "Severity (1-10): ";
        cin >> p.severity;

        patients.push(p);
    }

    cout << "\n===== TREATMENT ORDER =====\n";

    while (!patients.empty()) {
        Patient p = patients.top();
        patients.pop();

        cout << "Patient: " << p.name
             << " | Severity: " << p.severity
             << endl;
    }

    return 0;
}
