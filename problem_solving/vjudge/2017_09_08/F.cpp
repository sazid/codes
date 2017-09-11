#include <bits/stdc++.h>
using namespace std;

namespace ss {
    string to_string(long i) {
        std::stringstream ss;
        ss << i;
        return ss.str();
    }
}

int main() {
    char a_str[500];
    long b;
    long T;
    scanf("%ld", &T);
    long n = 1;
    while (T-- > 0) {
        scanf("%s %ld", a_str, &b);
        string a = a_str;
        if (a[0] == '-') {
            a = a.substr(1, a.length()-1);
        }
        if (b < 0) {
            b = abs(b);
        }
        bool divisible = false;

        if (a[0] == '0' && b != 0) {
            divisible = true;
        } else if (b == 0) {
            divisible = false;
        } else {
            string q;
            long res = 0;
            for (string::size_type i = 0; i < a.size(); i++) {
                long p = res*10 + (a[i]-'0');
                q += ss::to_string(p/b);
                res = p%b;
            }

            if (res == 0) divisible = true;
        }

        if (divisible) {
            printf("Case %ld: divisible\n", n++);
        } else {
            printf("Case %ld: not divisible\n", n++);
        }
    }

    return 0;
}