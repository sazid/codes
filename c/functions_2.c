#include <stdio.h>

// this function takes two parameters of type 'int' - a and b
// the result is also a value of type 'int'
int sum(int a, int b) {
	// return the addition of 'a' and 'b'
	return a + b;
}

int main() {
	int c;

	// call the 'sum' function and pass two arguments
	// 5 and 10
	// INSIDE THE FUNCTION, a - 5, b - 10
	c = sum(5, 10);

	printf("Sum of 5 and 10 is: %d\n", c);

	return 0;
}
