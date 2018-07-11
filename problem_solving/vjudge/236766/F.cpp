#include <bits/stdc++.h>
using namespace std;

char s[4][4];

int c(int i, int j, char ch) {
    int count = 0;
    if (s[i][j] == ch) count++;
    if (s[i+1][j] == ch) count++;
    if (s[i+1][j+1] == ch) count++;
    if (s[i][j+1] == ch) count++;
    return count;
}

bool check() {
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) {
        if (c(i,j,'#') >= 3 or c(i,j,'.') >= 3) return true;
    }
    return false;
}

int main() {
    int x, y;
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) cin >> s[i][j];
    cout << (check() ? "YES" : "NO") << endl;

    return 0;
}

