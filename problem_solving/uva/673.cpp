// 673 Parentheses Balance
#include <bits/stdc++.h>
using namespace std;

template <class T>
class s_stack {

    int *arr;
    int _size {0};
    int top {-1};

public:
    explicit s_stack(int size) {
        _size = size;
        arr = new int[size];
    }

    ~s_stack() {
        delete[] arr;
    }

    bool push(int x) {
        if (size() >= _size) {
            // cout << "stack overflow\n";
            return false;
        }

        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) {
            // cout << "stack underflow\n";
            return -1;
        }

        int x = arr[top--];
        return x;
    }

    int peek() {
        return arr[top];
    }

    int size() {
        return top + 1;
    }
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	unsigned long long T, i, sz;
	cin >> T;
	for (int i = 1; i <= T; i++) {
        s_stack<char> stk(136);
		string s;
		getline(cin, s);
		sz = s.size();
		for (i = 0; i < sz; i++) {
			if (stk.size() && stk.peek() == '(' && s[i] == ')') {
				stk.pop();
			} else if (stk.size() && stk.peek() == '[' && s[i] == ']') {
				stk.pop();
			} else {
				stk.push(s[i]);
			}
		}

			if (stk.size() > 0)
				cout << "No\n";
			else
				cout << "Yes\n";
	}

	return 0;
}