#include <bits/stdc++.h>
using namespace std;

struct node {
	long long key;
	int val;
	node *left, *right;
};

const int p = 131;
const int m = 1e9 + 9;
int n, score, highest_score = INT_MIN;
string name, highest_name;

long long p_pow[35];
void compute_powers() {
	p_pow[0] = 1;
	for (int i = 1; i < 35; ++i)
		p_pow[i] = (p_pow[i-1] * p) % m;
}

long long compute_hash(string const& s) {
	long long hash_value = 0;
	int sz = s.size();
	for (int i = 0; i < sz; ++i)
		hash_value = (hash_value + (s[i] * p_pow[i])) % m;

	return hash_value;
}

node *newNode(long long key, int val = 0) {
	node *n = new node;
	n->key = key;
	n->val = val;
	n->left = n->right = nullptr;
	return n;
}

node *insert(node *n, long long key, int val = 0) {
	if (n == nullptr) return newNode(key, val);

	if (key < n->key)
		n->left = insert(n->left, key, val);
	else if (key > n->key)
		n->right = insert(n->right, key, val);
	
	return n;
}

/*
search and update
provided a node, a key and a value
if key exists, update with value
else create node and insert value
*/
int search(node *n, long long key, int val) {
	if (n == nullptr) {
		return -1;
	} else if (key == n->key) {
		return n->val = n->val + val;
	} else if (key < n->key) {
		return search(n->left, key, val);
	} else {
		return search(n->right, key, val);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	compute_powers();
	srand(time(NULL));
	node *root = insert(nullptr, rand()%int(2e9), INT_MIN);

	cin >> n;
	while(n--) {
		cin >> name >> score;
		long long h_n = compute_hash(name);
		int s = search(root, h_n, score);

		if (s == -1) {
			insert(root, h_n, score);
			s = score;
		}

		if (s > highest_score) {
			highest_score = s;
			highest_name = name;
		}
	}

	cout << highest_name << '\n';

	return 0;
}

