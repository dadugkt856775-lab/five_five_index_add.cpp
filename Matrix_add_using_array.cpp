#include <iostream>
#include <array>
using namespace std;

int main() {
    array<array<int, 3>, 3> A = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    array<array<int, 3>, 3> B = {{
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    }};

    array<array<int, 3>, 3> C{};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Result Matrix:\n";

    for (auto &row : C) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
