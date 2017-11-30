// https://youtu.be/y9_sZ0UosVs?t=19m32s

#include <iostream>

using namespace std;

void func(int n) {
    if (n == 0) {
        printf("\n");
        return;
    }
    printf("%d ", n);
    func(n-1);
    printf("returning from func(%d)\n", n);
}

void func2(int n) {
    if (n == 11) {
        printf("\n");
        return;
    }

    printf("%d ", n);
    func2(n+1);
}

void func3(int n) {
    if (n == 0) {
        printf("\n");
        return;
    }

    func3(n-1);
    printf("%d ", n);
}

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int sum(int n) {
    if (n == 1) return 1;
    return n+sum(n-1);
}

int gcd(int a, int b) {
    if (b % a == 0) {
        return a;
    }

    return gcd(b % a, a);
}

int POW(int n, int p) {
    if (p == 1) {
        return n;
    } else if (p&1) {
        int r = POW(n, p/2);
        return n * r * r;
    } else {
        int r = POW(n, p/2);
        return r * r;
    }
}

int POW_MOD(int n, int p, int M) {
    if (p == 1) {
        return n%M; // if M=1, n%M will return 0, but if only n is returned, it'll output a wrong value
    } else if (p&1) {
        int r = POW_MOD(n, p/2, M);
        r = ((r%M) * (r%M)) % M;
        return ((n%M) * (r%M))%M;
    } else {
        int r = POW_MOD(n, p/2, M);
        return ((r%M) * (r%M))%M;
    }
}

int nCr(int n, int r) {
	if (r == 1) return n;
	else if (n == r) return 1;
	return nCr(n-1, r-1) + nCr(n-1, r);
}

int main() {
    func(10);
    func2(1);
    func3(10);
    printf("\n");
    printf("%d\n", fib(7));
    printf("\n");
    printf("sum(10)=%d\n", sum(5));
    printf("gcd(%d, %d)=%d\n", 4, 18, gcd(4, 18));
    printf("POW(5, 3)=%d\n", POW(5, 3));
    printf("POW(5, 4)=%d\n", POW(5, 4));
    printf("POW(2, 5)=%d\n", POW(2, 5));
    printf("POW(2, 5, 100)=%d\n", POW_MOD(2, 5, 100));
    printf("POW(5, 3, 100)=%d\n", POW_MOD(5, 3, 100));
    printf("POW(5, 4, 100)=%d\n", POW_MOD(5, 4, 100));
    printf("sizeof(char)=%lu\n", sizeof(char));
    printf("sizeof(int)=%lu\n", sizeof(int));
    printf("sizeof(unsigned int)=%lu\n", sizeof(unsigned int));
    printf("sizeof(long)=%lu\n", sizeof(long));
    printf("sizeof(unsigned long)=%lu\n", sizeof(unsigned long));
    printf("sizeof(long long)=%lu\n", sizeof(long long));
    printf("sizeof(unsigned long long)=%lu\n", sizeof(unsigned long long));
	printf("nCr = %dC%d=%d\n", 5, 3, nCr(5, 3));
    return 0;
}
