#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T-- > 0) {
        double Cx, Cy, R, count = 0;
        cin >> Cx >> Cy >> R;
        for (double x = Cx+1; x <= Cx + R; x++) {
            double y = sqrt(R*R - x*x);
            if (ceil(y) == y) {
                count++;
            }
        }
        count *= 4;
        cout << count << endl;
    }
    
    return 0;
}