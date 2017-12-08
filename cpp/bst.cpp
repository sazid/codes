#include <iostream>
using namespace std;

struct node {
	int data;
	node *left, *right;
};

node *root = nullptr;
node *ptr = nullptr;

void make_root(int x);
void make_node(int x);
void inorder(node *p);

void make_root(int x) {
	root = new node;
	root->data = x;
	root->left = nullptr;
	root->right = nullptr;
}

void make_node(int x) {
	node *n = new node;
	n->data = x;
	n->left = nullptr;
	n->right = nullptr;

	node *ptr = root;
	while(ptr != nullptr) {
		if (ptr->data == x) {
			cout << "Cannot insert duplicate data" << endl;
			break;
		} else if (ptr->data < x) {
			// look into right subtree/node
			if (ptr->right == nullptr) {
				ptr->right = n;
				break;
			} else {
				ptr = ptr->right;
			}
		} else {
			// look into left subtree/node
			if (ptr->left == nullptr) {
				ptr->left = n;
				break;
			} else {
				ptr = ptr->left;
			}
		}
	}
}

int main() {
	int x;
	cout << "Enter value or 0 to exit: ";
	
	while (true) {
		cin >> x;
		if (x == 0) break;

		if (root == nullptr) {
			make_root(x);
		} else {
			make_node(x);
		}
	}

	inorder(root);

	return 0;
}

