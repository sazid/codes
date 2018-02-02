#include <iostream>
using namespace std;

bool check(string a, string b) {
	string::size_type b_size = b.size(),
		bp = 0;
	for (char ca : a)
		if (ca == b[bp] && bp < b_size) bp++;

	return bp == b_size ? true : false;
}

string form(string s, long n, long A[], long A_size) {
	string r;
	string::size_type s_size = s.size();
	for (long i = 0; i < n; i++) s[A[i]-1] = '_';
	for (long i = 0; i < s_size; i++)
		if (s[i] != '_')
			r += s[i];
	return r;
}

int binsearch(string a, string b, long A[], long A_size) {
	unsigned long c = 0,
				  mid,
				  hi = a.size()-1,
				  lo = 0;

	while (lo < hi) {
		mid = lo + ((hi-lo+1)>>1);
		if (check(form(a, mid, A, A_size), b)) {
			lo = mid;
		} else {
			hi = mid - 1;
		}
	}

	return lo;
}

int main() {
	cout.sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	long A[a.size()];
	long n = a.size(), i=0;
	while (n--) {
		cin >> A[i++];
	}
	cout << binsearch(a, b, A, i) << endl;
	return 0;
}

