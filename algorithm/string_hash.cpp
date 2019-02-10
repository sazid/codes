#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n) {
	for (long long i = 2; i*i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

long long compute_hash(string const& s) {
	long long p = 307;
	long long hash_value = 0;
	long long p_pow = 1;
	long long m = 1e9+7;
	for (char c : s) {
		hash_value = (hash_value + (c + 1)*p_pow) % m;
		p_pow = (p_pow * p) % m;
	}
	return hash_value;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout << is_prime(2) << endl;
	cout << is_prime(3) << endl;
	cout << is_prime(11) << endl;
	cout << is_prime(10) << endl;
	cout << "307: " << is_prime(307) << endl;

	cout << compute_hash("") << endl;
	cout << compute_hash("a") << endl;
	cout << compute_hash("aa") << endl;
	cout << compute_hash("aaa") << endl;
	cout << compute_hash("aaaa") << endl;
	cout << compute_hash("this is some random text") << endl;
	cout << compute_hash("thisissomerandomtext") << endl;

	return 0;
}

