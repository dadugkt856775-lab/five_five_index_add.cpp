#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, double> movies;
    int n;

    cout << "Enter number of movies: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        double rating;

        cout << "\nMovie name: ";
        cin >> name;

        cout << "Rating: ";
        cin >> rating;

        movies[name] = rating;
    }

    cout << "\n===== MOVIE RATINGS =====\n";

    for (auto &m : movies) {
        cout << m.first
             << " : " << m.second << "/10\n";
    }

    auto best = movies.begin();

    for (auto it = movies.begin();
         it != movies.end(); ++it) {

        if (it->second > best->second)
            best = it;
    }

    cout << "\nHighest Rated Movie: "
         << best->first
         << " (" << best->second << "/10)";

    return 0;
}
