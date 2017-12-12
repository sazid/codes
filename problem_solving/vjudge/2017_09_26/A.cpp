#include <iostream>
#include <sstream>

using namespace std;

template <class T>
class _stack {
private:
    T *arr;
    unsigned long long ARR_SIZE {0};
    long long top {-1};

public:
    _stack(unsigned long long SIZE) {
        ARR_SIZE = SIZE;
        arr = new T[SIZE];
    }

    ~_stack() {
        delete[] arr;
    }

    // clears the stack
    void clear() {
        top = -1;
    }

    unsigned long long size() {
        return top + 1;
    }

    T peek() {
        return arr[top];
    }

    T peek(unsigned long long i) {
        if ((i > top) || (i < 0)) {
            return arr[top];
        }

        return arr[top - i];
    }

    void push(T i) {
        if (top == (ARR_SIZE - 1)) {
            cout << "Stack overflow" << endl;
            return;
        }

        arr[++top] = i;
    }

    T pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return NULL;
        }

        T i = arr[top--];
        return i;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    _stack<char> stk(256);
    string s;
    unsigned long long T;
    getline(cin, s);
    stringstream ss;
    ss << s;
    ss >> T;

    for (int k = 1; k <= T; k++) {
        stk.clear();
        cout.flush();
        getline(cin, s);
        if (s.empty()) {
            cout << "Yes\n";
            continue;
        } else if (s[0] == ')' || s[0] == ']') {
            cout << "No\n";
            continue;
        } else if (s.back() == '(' || s.back() == '[') {
            cout << "No\n";
            continue;
        } else {
            for (string::size_type i = 0; i < s.size(); i++) {
                if (s[i] == ')' && stk.peek() == '(') {
                    stk.pop();
                } else if (s[i] == ']' && stk.peek() == '[') {
                    stk.pop();
                } else {
                    stk.push(s[i]);
                }
            }

            if (stk.size() > 0) {
                cout << "No\n";
            } else {
                cout << "Yes\n";
            }
        }
    }

    return 0;
}