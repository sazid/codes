/*
 * Check whether the given bracketed expressions are correct or not
 */
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
	sstack<char> stk(1000000);
	string inp;
	string::size_type i, s;
	cin >> inp;
	s = inp.size();

	for (i = 0; i < s; i++) {
		if (stk.size() && stk.peek() == '(' && inp[i] == ')') {
			stk.pop();
		} else {
			stk.push(inp[i]);
		}
	}

	if (stk.size() > 0) {
		cout << "invalid\n";
	} else {
		cout << "valid\n";
	}

	return 0;
}