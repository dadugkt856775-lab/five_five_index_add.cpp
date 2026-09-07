#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> books;
    int choice;

    while (true) {
        cout << "\n===== LIBRARY =====\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Remove Book\n";
        cout << "4. Display Books\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title;

            cout << "Book ID: ";
            cin >> id;
            cout << "Book title: ";
            cin.ignore();
            getline(cin, title);

            books[id] = title;
            cout << "Book added.\n";
        }

        else if (choice == 2) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            auto it = books.find(id);

            if (it != books.end())
                cout << "Book: " << it->second << endl;
            else
                cout << "Book not found.\n";
        }

        else if (choice == 3) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            if (books.erase(id))
                cout << "Book removed.\n";
            else
                cout << "Book not found.\n";
        }

        else if (choice == 4) {
            for (auto &b : books)
                cout << b.first << " : " << b.second << endl;
        }

        else if (choice == 5) {
            break;
        }
    }

    return 0;
}
