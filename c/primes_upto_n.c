#include <stdio.h>

int is_prime(int n) {
	/**
	 * This function will return 
	 * 1 - if true
	 * 0 - if false
	 */
	int is_prime = 1;
	int i;

	for (i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			// if the number is divisible by something
			// then it is not prime
			is_prime = 0;
			break;
		}
	}

	return is_prime;
}

void print_primes_upto_n(int n) {
	int i;
	for (i = 2; i <= n; i++) {
		if (is_prime(i) == 1) {
			printf("%d\t", i);
		}
	}

	// print a newline at the end of the loop
	printf("\n");
}

int main() {
	print_primes_upto_n(40);
	
	return 0;
}
