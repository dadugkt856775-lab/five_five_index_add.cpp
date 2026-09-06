#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    vector<Product> cart;
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Product p;

        cout << "\nProduct name: ";
        cin >> p.name;

        cout << "Price: ";
        cin >> p.price;

        cout << "Quantity: ";
        cin >> p.quantity;

        cart.push_back(p);
    }

    double total = 0;

    cout << "\n===== SHOPPING CART =====\n";

    for (auto &p : cart) {
        double amount = p.price * p.quantity;

        cout << p.name << " x "
             << p.quantity << " = ₹"
             << amount << endl;

        total += amount;
    }

    cout << "\nTotal Bill = ₹" << total;

    return 0;
}
