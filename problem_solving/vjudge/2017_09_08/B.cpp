#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

#define MAX_PRIME 100000010
bitset<MAX_PRIME> numbers;
long counts[MAX_PRIME];
void sieve()
{
    numbers[0] = 1;
    numbers[1] = 1;
    for (ull i = 4; i < MAX_PRIME; i+=2) numbers[i]=1;
    for (ull i = 3; i*i <= MAX_PRIME; i+=2)
        if (numbers[i] == 0)
            for (ull k=i*i; k < MAX_PRIME; k+=(i+i))
                numbers[k]=1;
}

int main()
{
    sieve();
    
    ull count=0;
    for (ull i=0; i < MAX_PRIME; i++) {
      if (numbers[i] == 0) {
        count++;
      }

      counts[i] = count;
    }

    ull n;
    while (true) {
        scanf("%lld", &n);
        if (n == 0) break;

        double est = n/log(n);
        ull pi = counts[n];
        double result = (abs(pi - est)/(float)pi) * 100.0;
        printf("%.1lf\n", result);
    }

}

