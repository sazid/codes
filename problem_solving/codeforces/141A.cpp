#include <iostream>
using namespace std;

int letters[128];

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a.size() + b.size() != c.size()) {
        cout << "NO\n";
        return 0;
    }

    for (auto ch : c) letters[ch]++;

    for (auto ch : a) {
        if (letters[ch] == 0) {
            cout << "NO\n";
            return 0;
        }
        letters[ch]--;
    }

    for (auto ch : b) {
        if (letters[ch] == 0) {
            cout << "NO\n";
            return 0;
        }
        letters[ch]--;
    }
    cout << "YES\n";
    return 0;
}

