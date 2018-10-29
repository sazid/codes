#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int a_count[128];
int b_count[128];

bool is_present_inside(string &src, string &dst) {
    ui src_size = src.size();

    for (

    return true;
}

int main() {
    int T;
    string a, b;
    scanf("%d\n", &T);

    for (int cs = 1; cs <= T; ++cs) {
        getline(cin, a);
        getline(cin, b);

        ui az = a.size();
        ui bz = b.size();
        for (ui i = 0; i < az; ++i) a[i] = tolower(a[i]), ++a_count[ a[i] ];
        for (ui i = 0; i < bz; ++i) b[i] = tolower(b[i]), ++b_count[ b[i] ];

        bool aflag = true;
        for (int i = 0; i < 128; ++i) {
            if (a_count[i] > b_count[i]) {
                aflag = false;
                break;
            }
        }

        bool bflag = true;
        for (int i = 0; i < 128; ++i) {
            if (b_count[i] > a_count[i]) {
                bflag = false;
                break;
            }
        }

        if (aflag or bflag) printf("Case %d: Yes\n", cs);
        else printf("Case %d: No\n", cs);
    }
    return 0;
}

