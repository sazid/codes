#include <iostream>
using namespace std;

typedef struct Node {
	int data;
	struct Node *left, *right;
} * nptr;

nptr root, ptr;

void make_root(int);
void make_node(int);
void inorder(Node*);

int main() {
	root = nullptr;
	int x;

	while (true) {
		cout << "Enter data (0 to stop): ";
		cin >> x;
		if (x == 0) break;
		if (root == nullptr) make_root(x);
		else make_node(x);
	}

	inorder(root);
	return 0;
}

void make_root(int x) {
	nptr node = new Node;
	node->data = x;
	node->left = nullptr;
	node->right = nullptr;
	root = node;
}

void make_node(int x) {
	ptr = root;
	nptr node = new Node;
	node->data = x;
	node->left = nullptr;
	node->right = nullptr;

	while (ptr != nullptr) {
		if (ptr->data == x) {
			cout << "Cannot contain duplicate values\n";
			break;
		} else if (ptr->data > x) {
			// go left
			if (ptr->left == nullptr) {
				ptr->left = node;
				break;
			} else ptr = ptr->left;
		} else {
			// go right
			if (ptr->right == nullptr) {
				ptr->right = node;
				break;
			} else ptr = ptr->right;
		}
	}
}

void inorder(Node *n) {
	if (n != nullptr) {
		inorder(n->left);
		cout << n->data << " ";
		inorder(n->right);
	}
}
