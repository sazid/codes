#include <iostream>
#include <algorithm>
#include <vector>
#define ll unsigned long
using namespace std;

int main() {
    ll	c=0,
            a=0,
            b=0,
            m=0;

    long n;
    cin >> n;
    while (n-- > -1) {
        if (n==-1) {
            b--;
        } else cin >> b;

        if (b>=a) c++;
        else {
            m=max(m,c);
            c=1;
        }
        a=b;
    }

    cout << m << endl;

    return 0;
}

