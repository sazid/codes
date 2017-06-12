#include <iostream>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main() {
    string s;
    while(getline(cin, s)) {
        int l=s.length();
        int c=0;
        f(l) {
            if (i!=l-1 && i+1<l && isalpha(s[i]) && !isalpha(s[i+1])) {
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}