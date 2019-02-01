#include <bits/stdc++.h>
using namespace std;

long long compute_hash(string const& s) {
	long long p = 131;
	long long m = 1e9 + 9;
	long long hash_value = 0;
	long long p_pow = 1;
	for (char c : s) {
		hash_value = (hash_value + (c * p_pow) % m) % m;
		p_pow = (p_pow * p) % m;
	}
	return hash_value;
}

int main() {
	cout << compute_hash("") << endl;
	cout << compute_hash("a") << endl;
	cout << compute_hash("aa") << endl;
	cout << compute_hash("aba") << endl;
	cout << compute_hash("abb") << endl;
	cout << compute_hash("al~.a/sf+><X+_++)(#@$*&)(4235") << endl;
	cout << compute_hash("al~.a/sf+><X+_++)(#@$*&)(4236") << endl;

	return 0;
}

