#include <iostream>
#define STACK_SIZE 10
using namespace std;

int stack[STACK_SIZE];
int top = -1;

void push(int item) {
	if (top >= STACK_SIZE-1) cout << "Stack overflow" << endl;
	stack[++top] = item;
}

void pop() {
	if (top < 0) cout << "Stack underflow" << endl;
	stack[top--] = NULL;
}

int get_top() {
	return stack[top];
}

int main() {
	return 0;
}
