#include <stdio.h>

int fact_iter(int n) {
	int f = 1;
	int i;

	for (i = 1; i <= n; ++i) {
		f *= i;
	}

	return f;
}

int fact_recur(int n) {
	if (n == 0) return 1;
	return n * fact_recur(n - 1);
}

int fibo_iter(int n) {
	int a = 0;
	int b = 1;
	int next;
	int i;

	for (i = 1; i <= n; ++i)
	{
		next = a + b;
		a = b;
		b = next;
	}

	return a;
}

int fibo_recur(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}

	return fibo_recur(n - 2) + fibo_recur(n - 1);
}

int sum_n_iter(int n) {
	int i;
	int sum = 0;

	for (i = 0; i <= n; i++) {
		sum += i;
	}

	return sum;
}

int sum_n_recur(int n) {
	if (n == 1) return 1;

	return n + sum_n_recur(n - 1);
}

int sum_digits_iter(int n) {
	int sum = 0;

	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}

int sum_digits_recur(int n) {
	if (n == 0) return 0;
	return n % 10 + sum_digits_recur(n / 10);
}

void show_digits_recur(int n) {
	if (n == 0) return;

	printf("%d\t", n % 10);

	return show_digits_recur(n / 10);
}

int n_th_even_iter(int n) {
	int count = 0;
	int i;
	int n_th_even = 0;

	for (i = 0; count <= n; i++) {
		if (i % 2 == 0) {
			count++;
			n_th_even = i;
		}
	}

	return n_th_even;
}

int n_th_even_recur(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 2;

	return 2 + n_th_even_recur(n - 1);
}

int main()
{
	printf("Input for factorial: ");
	int n_fact;
	scanf("%d", &n_fact);
	printf("Factorial(iter) of %d: %d\n", n_fact, fact_iter(n_fact));
	printf("Factorial(recur) of %d: %d\n", n_fact, fact_recur(n_fact));

	printf("---\n");
	printf("Input for n-th fibonacci: ");
	int n_fibo;
	scanf("%d", &n_fibo);
	printf("%d-th fibonacci(iter): %d\n", n_fibo, fibo_iter(n_fibo));
	printf("%d-th fibonacci(recur): %d\n", n_fibo, fibo_recur(n_fibo));

	printf("---\n");
	printf("Input for sum of series 1 + 2 + 3 + ... + ");
	int n_sum;
	scanf("%d", &n_sum);
	printf("Sum of series(iter): %d\n", sum_n_iter(n_sum));
	printf("Sum of series(recur): %d\n", sum_n_recur(n_sum));

	printf("---\n");
	printf("Input for sum of digits for: ");
	int n_sum_digits;
	scanf("%d", &n_sum_digits);
	printf("Sum of digits(iter): %d\n", sum_digits_iter(n_sum_digits));
	printf("Sum of digits(recur): %d\n", sum_digits_recur(n_sum_digits));
	show_digits_recur(n_sum_digits);
	printf("\n");

	printf("---\n");
	printf("nth even: ");
	int n_th_even;
	scanf("%d", &n_th_even);
	printf("%d-th even(iter): %d\n", n_th_even, n_th_even_iter(n_th_even));
	printf("%d-th even(recur): %d\n", n_th_even, n_th_even_recur(n_th_even));

	return 0;
}
