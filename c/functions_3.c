#include <stdio.h>

// a function which returns nothing will have the type 'void'
void test() {
	printf("This function returns nothing!\n");

	// NOTE, we do not 'return' anything from this function
}

int main() {
	test();

	return 0;
}
