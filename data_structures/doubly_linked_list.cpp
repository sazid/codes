#include <iostream>
using namespace std;

class LIST_EXCEPTION : public exception {
	string msg;

public:
	LIST_EXCEPTION() {
		msg = "List is empty\n";
	}
	LIST_EXCEPTION(string msg) {
		this->msg = msg;
	}

	const char * what() const throw() {
		return msg.c_str();
	}
};

template <class T> class DoublyLinkedList;
template <class T>
class Node {
private:
	// reference to previous node
	Node<T> *prev;
	// reference to next node
	Node<T> *next;

public:
	// data
	T data;

	Node<T> * getPreviousNode() {
		return prev;
	}

	Node<T> * getNextNode() {
		return next;
	}

	friend class DoublyLinkedList<T>;
};

template <class T>
class DoublyLinkedList {
	unsigned long long size;
	Node<T> *firstNode;
	Node<T> *lastNode;	

public:
	DoublyLinkedList() {
		size = 0;
		firstNode = NULL;
		lastNode = NULL;
	}

	~DoublyLinkedList() {
		if (size == 0) return;

		while (size-- > 0) {
			Node<T> *next = firstNode->next;
			delete firstNode;
			firstNode = next;
		}
	}

	const unsigned long long getSize() {
		return size;
	}

	Node<T> * getFirstNode() {
		if (size == 0) throw LIST_EXCEPTION();
		return firstNode;
	}

	Node<T> * getLastNode() {
		if (size == 0) throw LIST_EXCEPTION();
		return lastNode;
	}

	// append a new node at the end
	Node<T> * append(T data) {
		Node<T> *n = new Node<T>;
		n->data = data;

		if (size == 0) {
			n->prev = NULL;
			n->next = NULL;
			firstNode = n;
			lastNode = n;
		} else {
			lastNode->next = n;
			n->prev = lastNode;
			n->next = NULL;
			lastNode = n;
		}

		size++;
		return n;
	}

	// remove the first nodee
	void removeHead() {
		if (size == 0) throw LIST_EXCEPTION("Cannot remove from an empty list");

		Node<T> *n = firstNode;
		Node<T> *next = firstNode->next;
		if (size >= 2) {
			next->prev = NULL;
			firstNode = next;
		}

		delete n;
		size--;
	}

	// remove the last node
	void removeTail() {
		if (size == 0) throw LIST_EXCEPTION("Cannot remove from an empty list");

		Node<T> *n = lastNode;
		Node<T> *prev = lastNode->prev;
		if (size >= 2) {
			prev->next = NULL;
			lastNode = prev;
		}

		delete n;
		size--;
	}

	// remove the given node
	void remove(Node<T> *n) {
		if (size == 0) throw LIST_EXCEPTION("Cannot remove from an empty list");

		Node<T> *next = n->next;
		Node<T> *prev = n->prev;

		if (next == NULL) {
			removeTail();
			return;
		}
		if (prev == NULL) {
			removeHead();
			return;
		}

		prev->next = next;
		next->prev = prev;

		delete n;
		size--;
	}

	// inserts a node after prevNode
	Node<T> * insert(Node<T> *prevNode, T data) {
		if (size == 0) throw LIST_EXCEPTION();

		Node<T> *n = new Node<T>;
		n->data = data;

		Node<T> *next = prevNode->next;
		prevNode->next = n;
		n->prev = prevNode;
		n->next = next;
		next->prev = n;

		size++;
		return n;
	}
};

int main() {
	DoublyLinkedList<int> list;
	Node<int> *a = list.append(1);
	Node<int> *b = list.append(3);
	Node<int> *c = list.append(5);
	Node<int> *d = list.append(9);

	list.append(243);
	list.append(24233);
	list.append(940);

	list.insert(d, 10000);
	list.removeHead();
	list.removeTail();
	list.remove(b);
	list.remove(c);
	list.remove(d);

	Node<int> *node = list.getFirstNode();
	while (node != NULL) {
		cout << node->data << endl;
		node = node->getNextNode();
	}

	return 0;
}
