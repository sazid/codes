#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d\n", &n);
    while(n--) {
        string s;
        getline(cin, s);
        if (s.length() == 0) {
            printf("True\n");
            continue;
        } else if (s.length() % 2 != 0) {
            printf("False\n");
            continue;
        }
        int sq_l=0, sq_r=0, p_l=0, p_r=0;
        bool m=false;
        for(int i=0; i)
    }
    return 0;
}