#include <bits/stdc++.h>
using namespace std;

struct node {
	long long key;
	int val;
	node *left, *right;
};

int n;
string s;
long long p_pow[35];

inline long long compute_hash(string const& s) {
	const int m = 1e9 + 9;
	long long hash_value = 0;

	int sz = s.size();
	for (int i = 0; i < sz; ++i)
		hash_value = (hash_value + (s[i] * p_pow[i])) % m;

	return hash_value;
}

inline void compute_powers() {
	const int p = 131;
	const int m = 1e9 + 9;
	p_pow[0] = 1;
	for (int i = 1; i < 35; ++i)
		p_pow[i] = (p_pow[i-1] * p) % m;
}

inline node* newNode(long long key) {
	node *n = new node;
	n->key = key;
	n->val = 0;
	n->left = n->right = nullptr;
	return n;
}

node *insert(node *n, long long key) {
	if (n == nullptr)
		return newNode(key);
	
	if (key < n->key)
		n->left = insert(n->left, key);
	else if (key > n->key)
		n->right = insert(n->right, key);

	return n;
}

/*
-1 if key not found
val of key if found
*/
int search(node *n, long long key) {
	if (n == nullptr)
		return -1;
	else if (key == n->key)
		return ++n->val;
	else if (key < n->key)
		return search(n->left, key);
	else
		return search(n->right, key);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	compute_powers();
	srand(time(NULL));
	node* root = insert(nullptr, rand()%100000);

	cin >> n;
	while (n--) {
		cin >> s;
		auto h_s = compute_hash(s);
		auto r = search(root, h_s);
		if (r == -1) {
			cout << "OK\n";
			insert(root, h_s);
		}
		else
			cout << s << r << '\n';
	}

	return 0;
}

