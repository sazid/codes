/*input
8
15 6 4 5 7 23 71 50
*/

#include <bits/stdc++.h>
using namespace std;

struct node
{
	int val;
	node* left;
	node* right;
};

node* root;

bool search(node* n, int k) {
	bool result;
	if (n == nullptr) {
		result |= false;
	}
	else if (n->val == k) {
		result |= true;
	}
	else if (n->val > k) {
		cout << "Searching left of " << n->val << endl;
		result |= search(n->left, k);
	}
	else {
		cout << "Searching right of " << n->val << endl;
		result |= search(n->right, k);
	}
	return result;
}

node* add(node* n, int k) {
	if (n == nullptr) {
		n = new node;
		n->val = k;
		return n;
	} else if (n->val > k) {
		n->left = add(n->left, k);
		return n->left;
	} else {
		n->right = add(n->right, k);
		return n->right;
	}
}

int main() {
	int N;
	cin >> N;

	int x;
	cin >> x;
	root = new node;
	root->val = x;
	// cout << root << endl;

	for (int i = 1; i < N; ++i) {
		cin >> x;
		add(root, x);
	}

	cout << search(root, 5) << endl;
	// cout << search(root, 15) << endl;
	// cout << search(root, 100) << endl;

	return 0;
}
