#include <iostream>
using namespace std;

int main() {
    string s, r;
    cin >> s;
    auto sz = s.size();
    for (int i = 0; i < sz; i++) {
        if (s.substr(i, 2) == "-.") {
            r += '1';
            i++;
        }
        else if (s.substr(i, 2) == "--") {
            r += '2';
            i++;
        }
        else if (s[i] == '.') r += '0';
    }
    cout << r << endl;
    return 0;
}
