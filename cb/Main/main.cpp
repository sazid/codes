#include <bits/stdc++.h>
using namespace std;

long long n, c, k;
bool visited[26];
string per;
string s;

void search() {
    if (c > k) return;
    if (per.size() == n) {
        printf("%s\n", per.c_str());
        c++;
    } else {
        for (long long i = 0; i < n; i++) {
            if (visited[i]) continue;
            visited[i] = true;
            per += s[i];
            search();
            visited[i] = false;
            per = per.substr(0, per.size()-1);
        }
    }
}

int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    int T;
    scanf("%d", &T);
    for (int cs = 1; cs <= T; cs++) {
        printf("Case %d: ", cs);

    }

    return 0;
}
