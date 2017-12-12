#include <iostream>
using namespace std;
typedef long long ll;

ll nums[10000001];

bool is_prime(ll n) {
	if (n==2) return true;
	else if (n==1) return false;
	else if (n&1) return nums[n] == 1 ? false : true;
	else return false;
}

void sieve_primes(ll N) {
	for (ll i = 3; i*i <= N; i+=2) {
		if (!nums[i]) {
			for (ll k = i*i; k <= N; k+=(i+i)) {
				nums[k] = 1;
			}
		}
	}
}

int main() {
	sieve_primes(10000000);
	ll count=0;
	for (ll i = 0; i < 100; i++) {
		if (is_prime(i)) {
			count++;
			cout << i << "\n";
		}
	}
	cout << "Count: " << count << "\n";

	return 0;
}