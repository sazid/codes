#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int sumDigit(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int su(int n) {
	int t = sumDigit(n);
	while (t >= 10) {
		t = sumDigit(t);
	}
	return t;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char a[26], b[26];
	int pos[128] = {0};

	for (char c = 'a', i = 1; c <= 'z'; c++, i++) pos[(int)c] = i;
	for (char c = 'A', i = 1; c <= 'Z'; c++, i++) pos[(int)c] = i;

	while (scanf("%s %s", a, b) != EOF) {
		int len1 = strlen(a);
		int len2 = strlen(b);
		int sum1 = 0, sum2 = 0;

		for (int i = 0; i < len1; i++) sum1 += pos[int(a[i])];
		for (int i = 0; i < len2; i++) sum2 += pos[int(b[i])];

		int s1 = su(sum1);
		int s2 = su(sum2);

		if (s1 > s2) swap(s1, s2);
		printf("%.2f %%\n", (float)s1*100.0f / (float)s2);

		// printf("%d %d %lf\n", sum1, sumDigit(sum1), double(double(sum1)/double(sumDigit(sum1))));
	}

	return 0;
}
