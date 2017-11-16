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
vector<vector<ull>> powers(_size);

pair<vector<ull>, vector<ull>> prime_factors(ull n) {
    vector<ull> factors;
    vector<ull> powers;
    ull sq = sqrt(_size);
    for (ull i = 2; i <= sq; i++) {
        if (primes[i] == 0) {
            int power = 0;
            while (n % i == 0) {
                power++;
                factors.push_back(i);
                n /= i;
            }
            if (power > 0)
                powers.push_back(power);
        }
    }
    return {factors, powers};
}

void sieve() {
    primes[0] = 1;
    primes[1] = 1;
    ull sq = sqrt(_size);
    
    for (ull i = 4; i <= _size; i+=2) {
        primes[i] = 1;
        pair<vector<ull>, vector<ull>> val = prime_factors(i);
        factors[i] = val.first;
        powers[i] = val.second;
    }
    for (ull i = 3; i <= sq; i+=2) {
        pair<vector<ull>, vector<ull>> val = prime_factors(i);
        factors[i] = val.first;
        powers[i] = val.second;
        if (primes[i] == 0) {
            for (ull k = i*i; k <= sq; k+=(i+i)) {
                primes[k] = 1;
            }
        }
    }
}

int main() {
    sieve();
    
    for (ull i = 0; i <= 20; i++) {
        cout << "Factors of " << i << ": ";
        for (ull k: factors[i]) {
            cout << k << " ";
        }
        cout << endl;
        cout << "Number of divisors of " << i << ": ";
        ull divs = 1;
        for (ull k: powers[i]) {
            divs *= (k + 1);
        }
        cout << divs << endl;
    }
    
    return 0;
}