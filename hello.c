#include <stdio.h>

// POINTERS: Pointers are a special type of variable and
// instead of storing a normal value, a pointer holds the
// memory address of another variable.

int main()
{
	int a;

	// int *var_name - putting an * (asterisk) before the variable name
	// while declaring a it, makes it a ~pointer~ variable
	int *p;

	a = 5;

	// &a - gives the memory address of the variable 'a'
	p = &a;

	// address values or pointers are represented by '%p'
	printf("a:\t %d\n", a);
	printf("&a:\t %p\n", &a);
	printf("p:\t %p\n", p);

	printf("---\n");

	// * (asterisk) is known as "VALUE OF" operator
	// & (ampersand) is known as "ADDRESS OF" operator

	// Change the "VALUE OF" the variable that the pointer 'p'
	// variable points to. In this case, the pointer 'p' points
	// to the variable 'a'. So, we're changing the value of the
	// variable 'a'
	*p = 10;

	// let's verify!
	printf("a:\t %d\n", a);
	printf("*p:\t %d\n", *p);

	return 0;
}

