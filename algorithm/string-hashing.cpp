#include <bits/stdc++.h>
using namespace std;

// NOTE: hashing only for lowercase letters
// In case of uppercase letters, set p = 53 and
// change the c-'a'+1 line to something suitable if necessary
long long compute_hash(string const& s) {
	const int p = 31;
	const int m = 1e9 + 9;
	long long hash_value = 0;
	long long p_pow = 1;
	for (char c : s) {
		hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
		p_pow = (p_pow * p) % m;
	}
	return hash_value;
}

int main() {
	cout << compute_hash("a") << endl;
	cout << compute_hash("b") << endl;
	cout << compute_hash("c") << endl;
	cout << compute_hash("abc") << endl;
	cout << compute_hash("abcd") << endl;
	cout << compute_hash("sadfasdfasdfadsfasdfasdfasdfasdfas") << endl;
	cout << compute_hash("sadfasdfasdfadsfasdfasdfasdfasdfaa") << endl;
	
	return 0;
}
