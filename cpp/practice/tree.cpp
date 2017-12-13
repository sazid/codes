#include <iostream>
using namespace std;

struct treenode {
	int data;
	treenode *left, *right;
};

struct treenode *root, *ptr;

void make_root(int x) {
	ptr = new treenode;
	ptr->data = x;
	ptr->left = nullptr;
	ptr->right = nullptr;
	root = ptr;
}

void make_node(int x) {
	treenode *p = new treenode;
	p->data = x;
	p->left = nullptr;
	p->right = nullptr;
	ptr = root;
	while (ptr != nullptr) {
		if (ptr->data == x) break;
		else if (ptr->data > x) {
			if (ptr->left == nullptr) {
				ptr->left = p;
				break;
			} else ptr = ptr->left;
		} else if (ptr->data < x) {
			if (ptr->data == x) break;
			else if (ptr->right == nullptr) {
				ptr->right = p;
				break;
			} else ptr = ptr->right;
		}
	}
}

void inorder(treenode *p) {
	if (p != nullptr) {
		inorder(p->left);
		cout << ptr-> data << " ";
		inorder(p->right);
	}
}

void preorder(treenode *p) {
	if (p != nullptr) {
		cout << ptr-> data << " ";
		preorder(p->left);
		preorder(p->right);
	}
}

void postorder(treenode *p) {
	if (p != nullptr) {
		postorder(p->left);
		postorder(p->right);
		cout << ptr-> data << " ";
	}
}

int main() {
	int x;
	root = nullptr;
	cout << "Enter -1 to exit" << endl;
	while(true) {
		cout << "Input: ";
		cin >> x;
		if (x == -1) break;
		if (root == nullptr) {
			make_root(x);
		} else {
			make_node(x);
		}
	}
	inorder(root);
	return 0;
}
