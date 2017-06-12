#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
void r(string &s, int l, int r) {
    int size=((r-l)/2)+l;
    char temp;
    for (int i=l;i<=size;i++,r--) {
        temp=s[i];
        s[i]=s[r];
        s[r]=temp;
    }
}
int main() {
    string s;
    while(getline(cin, s)) {
        int l=s.length();
        int start=0;
        int cur=0;
        f(l) {
            if (s[i]==' ') {
                if (i != start) r(s, start, i-1);
                start=i+1;
            } else if (i==l-1) {
                r(s, start, i);
            }
        }
        cout << s << endl;
    }
    return 0;
}