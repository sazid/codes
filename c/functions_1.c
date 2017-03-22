#include <stdio.h>

/*
HOW A FUNCTION IS DEFINED

type func_name(parameters...)
{
	// body
	return some_value; // some_value has to be of 'type'
}
*/

// 'int' is the type of value, that will be returned (back) from this function
// 'sum_4_5' is the name of the function
int sum_4_5() {
	// return the result of 4+5 which is of type 'int'
	return 4 + 5;
}

int main() {
	// call the function by its name (also, put an empty parenthesis pair if it does not accept any arguments)
	int s = sum_4_5();

	printf("Sum of 4 and 5 is: %d\n", s);

	return 0;
}
