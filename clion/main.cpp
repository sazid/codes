#include <bits/stdc++.h>
using namespace std;

struct marks {
    int id {0};
    int sum {0};
};

bool cmp(marks &a, marks &b) {
    if (a.sum == b.sum) {
        return a.id < b.id;
    } else {
        return a.sum > b.sum;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, x, id=1;
    cin >> n;
    t = n;

    marks _marks[n];

    while (t--) {
        _marks[id-1].id = id;
        cin >> x;
        _marks[id-1].sum += x;
        cin >> x;
        _marks[id-1].sum += x;
        cin >> x;
        _marks[id-1].sum += x;
        cin >> x;
        _marks[id-1].sum += x;

        id++;
    }

    sort(_marks, _marks+n, cmp);

    for (int i = 0; i < n; i++) {
        if (_marks[i].id == 1) {
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}

