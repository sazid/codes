#include <iostream>

using namespace std;

int main() {

    string s;
    cin >> s;

    int count_0 = 0;
    bool found_1 = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') found_1 = true;
        if (found_1 && s[i] == '0') count_0++;
    }

    if (count_0 >= 6) cout << "yes\n";
    else cout << "no\n";

    return 0;
}

