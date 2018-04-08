#include <bits/stdc++.h>
#define MAX_SIZE 5000010
using namespace std;

// http://www.geeksforgeeks.org/eulers-totient-function-for-all-numbers-smaller-than-or-equal-to-n/

// step 1 - create an array to store phi values
unsigned long phi[MAX_SIZE];

// step 2 - initialize all values of phi[i] as i
void init_phi() {
    for (unsigned long i = 0; i < 5000001; i++) phi[i] = i;
}

// step 3 - compute totient values using the Euler's totient formula
void compute_phi() {
    for (unsigned long p = 2; p < 5000001; p++) {
        // if phi[p] is not yet calculated, then it is a prime number
        if (phi[p] == p) {
            // phi of a prime number p, is one less than the number itself, p-1
            phi[p] = p - 1;

            for (unsigned long i = p+p; i < 5000001; i+=p) {
                // phi[i] = phi[i] * (p - p/1)
                phi[i] = (phi[i] / p) * (p - 1);
            }
        }
    }
}

void cumulative_sum() {
    for (unsigned long i = 1; i < 5000001; i++) {
        phi[i] = (phi[i] * phi[i]) + phi[i - 1];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    init_phi();
    compute_phi();
    cumulative_sum();

    unsigned long n, i = 1, a, b;
    scanf("%lu", &n);
    while (n-- > 0) {
        scanf("%lu %lu", &a, &b);
        printf("Case %lu: %lu\n", i++, phi[b]-phi[a-1]);
    }

    return 0;
}