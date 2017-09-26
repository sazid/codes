#include <iostream>
using namespace std;

template <class T>
class sstack {
	T *stk;
	unsigned long long _size;
	unsigned long long top;
	unsigned long long bottom;

public:
	sstack(unsigned long long max_size) {
		this->_size = 0;
		this->stk = new T[max_size];
		top = max_size - 1;
		bottom = max_size - 1;
	}
	~sstack() {
		delete[] stk;
	}

	unsigned long long size() {
		return _size;
	}

	bool push(T item) {
		if (bottom - 1 < 0) return false;
		stk[bottom] = item;
		bottom--;
		_size++;
		return true;
	}

	T pop() {
		if (top < 0) {
			return NULL;
		}
		_size--;
		top--;
		return stk[top+1];
	}

	T peek() {
		return stk[top];
	}

	T peek(unsigned long long index) {
		if (top - bottom + 1 >= index) {
			return stk[top - index];
		} else {
			return stk[top];
		}
	}
};

int main() {
	sstack<int> stk(10);
	stk.push(10);
	stk.push(9);
	stk.push(8);
	stk.push(7);
	stk.push(6);
	stk.push(5);
	stk.push(4);
	stk.push(3);
	stk.push(2);
	stk.push(1);

	cout << stk.peek() << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << "Stack size: " << stk.size() << endl;
	cout << "Stack top: " << stk.peek() << endl;
	cout << "Stack bottom: " << stk.peek(stk.size()-1) << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << stk.pop() << endl;
	cout << "Stack size: " << stk.size() << endl;
	cout << stk.pop() << endl;
	cout << "Stack size: " << stk.size() << endl;

	return 0;
}
