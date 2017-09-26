#include <bits/stdc++.h>
#define MAX_NUMS 1002

using namespace std;

int divs[MAX_NUMS];
vector<int> vt(MAX_NUMS);

int NOD(int n) {
    int c = 0;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            if (n/i == i) c++;
            else c += 2;
        }
    }
    return c;
}

void countNODs() {
    for (int i = 1; i < MAX_NUMS; i++) {
        divs[i] = NOD(i);
    }
}

void sortNODs() {
    int p = 1;
    int sq = static_cast<int>(sqrt(MAX_NUMS) + 1);
    // outer loop - divisor count
    for (int i = 1; i <= sq; i++) {
        // inner loop - loop from the end so that x > y always holds true
        for (int k = 1000; k >= 1; k--) {
            if (divs[k] == i) {
                vt[p++] = k;
            }
        }
    }
}

int main() {
    countNODs();
    sortNODs();

    int T, i = 1;
    scanf("%d", &T);
    while (T-- > 0) {
        int n;
        scanf("%d", &n);
        printf("Case %d: %d\n", i++, vt[n]);
    }

    return 0;
}