#include <bits/stdc++.h>
using namespace std;
typedef unsigned int ui;

bool check(string a, string b) {
    auto sz = b.size();
    for (int i = 0; i < sz; i++) {
        if (a[i] > b[i]) return false;
    }

    return true;
}

int main() {
    int count = 0;
    string s;
    cin >> s;

    auto sz = s.size();
    for (ui i = 0; i+1 < sz; i++) {
        bool f = true;
        if (check(s.substr(i, sz), s.substr(i+1, sz))) count++;
    }
    cout << count << endl;
    

    return 0;
}

