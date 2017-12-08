#include <iostream>
#include <cmath>
using namespace std;

bool _checkbit(int i, int pos) { return (bool) (i & (1 << pos)); }
unsigned long _setbit(unsigned long i, unsigned long pos) { return i = (i | (1 << pos)); }

const unsigned long N = 100000010;
// this is the same as dividng by 32 - 100000010/32
// considering unsigned long to be of 32 bit
const unsigned long range = N >> 5;
int primes[range + 2];

bool is_prime(unsigned long i) { return _checkbit(primes[i >> 5], i & 31) == 0; }

void sieve() {
	primes[0] = _setbit(primes[0], 0);
	primes[0] = _setbit(primes[0], 1);

	for (unsigned long i = 4; i <= N; i+=2) {
		primes[i>>5] = _setbit(primes[i>>5], i&31);
	}

	unsigned long sq = sqrt(N);
	for (unsigned long i = 3; i <= sq; i += 2) {
		if (_checkbit(primes[i >> 5], i & 31) == 0) {
			for (unsigned long k = i*i; k <= N; k += i << 1) {
				primes[k >> 5] = _setbit(primes[k >> 5], k & 31);
			}
		}
	}
}

int main() {
	sieve();
	for (unsigned long i = 0; i < 100; i++) {
		if (is_prime(i)) printf("%lu\n", i);
	}
	return 0;
}