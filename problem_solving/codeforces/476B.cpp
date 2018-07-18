#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double cnt, ac, o, g, n;

void f(double sum, double l) {
    if (l >= n) {
        ++cnt;
        if (sum + g == o) ac++;
        return;
    }

    f(sum+1, l+1);
    f(sum-1, l+1);
}

int main() {
    string a, b;
    cin >> a >> b;
    auto sz = a.size();
    for (auto c : a) o = c == '+' ? o+1 : o-1;
    for (auto c : b) g = c == '+' ? g+1 : g,
                     g = c == '-' ? g-1: g,
                     n = c == '?' ? n+1 : n;
    f(0, 0);
    // cout << ac/cnt << endl;
    printf("%0.12lf\n", ac/cnt);
    return 0;
}

