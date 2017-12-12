#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#define ll long long
#define ull unsigned long long
using namespace std;
const ull _size = 100010;

bitset<_size> primes;
vector<vector<ull>> factors(_size);

vector<ull> prime_factors(ull n) {
    vector<ull> factors;
    ull sq = sqrt(_size);
    for (ull i = 2; i <= sq; i++) {
        if (primes[i] == 0) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }
    }
    return factors;
}

void sieve() {
    primes[0] = 1;
    primes[1] = 1;
    ull sq = sqrt(_size);
    
    for (ull i = 4; i <= _size; i+=2) {
        primes[i] = 1;
        factors[i] = prime_factors(i);
    }
    for (ull i = 3; i <= sq; i+=2) {
        factors[i] = prime_factors(i);
        if (primes[i] == 0) {
            for (ull k = i*i; k <= sq; k+=(i+i)) {
                primes[k] = 1;
            }
        }
    }
}

int main() {
    sieve();
    
    for (ull i = 0; i <= 40; i++) {
        cout << "Factors of " << i << ": ";
        for (ull k: factors[i]) {
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}