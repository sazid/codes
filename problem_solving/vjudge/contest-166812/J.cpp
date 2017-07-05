#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2)) {
        int l1=s1.length();
        int l2=s2.length();
        char ch1,ch2;
        if(l1>=l2) {
            for (int i=0;i<l1;i++) {
                ch1=s1[i];
                ch2=i>=(l2-1)?' ':s2[i];
                printf("%c%c\n",ch2,ch1);
            }
        } else {
            printf("Here\n");
            for (int i=0;i<l2;i++) {
                ch2=s2[i];
                ch1=i>=(l1)?' ':s1[i];
                printf("%c%c\n",ch2,ch1);
            }
        }
    }
    return 0;
}