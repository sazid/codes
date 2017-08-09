// Compile: g++ -std=c++11 -O2 -Wall sample.cpp -o sample

// Macros - text replaced at compile time (before compilation to be precise) by the preprocessor
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MT make_tuple

#define REP(i,a,b) for (int i = a; i <= b; i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
	// this disables syncing standard streams between C and C++ I/O operations
	// thus allowing slightly faster execution
	ios::sync_with_stdio(0);
	// This unties cin from cout. Tied streams ensure that one stream is
	// flushed automatically before each I/O operation on the other
	// stream.
	cin.tie(0);
	// Read more: https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull

	// read a line from the input
	string s;
	getline(cin , s);

	// keep reading until EOF is reached
	int x;
	while (cin >> x) {
	}

	// http://www.cplusplus.com/reference/cstdio/freopen/
	// when input and output files are used (provided) instead of the default
	// standard I/O (cin, cout) use this to read/write from/to the file using
	// cin and cout object
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// from this point onward, every output by cout will be written to "output.txt"
	// and input will be read from "input.txt"

	// use 'long long' for large integers which is 64bit
	// The suffix LL means that the type of the number is long long
	long long y = 123456789123456789LL;

	// A common mistake when using long long is that the type int is still
	// used somewhere in the code. For example, consider the following code:
	int a = 123456789;
	long long b = a*a;
	cout << b << "\n"; // -1757895751
	// Even though the variable is of type long long, both numbers in the expression
	// a*a are of type int and the result is of type int. To avoid this problem,
	// either convert a to long long type or cast it to long long
	b = (long long)a*a;
	cout << b << "\n";

	// g++ also provides another really big integer type of 128bit
	// but this is not guaranteed to be available in all contest systems
	__int128_t p;

	// long double - provided by g++, 80bit
	long double z;

	// Floating point numbers cannot always be represented accurately, there will be
	// rounding errors. Consider the following:
	double d = 0.3*3+0.1;
	printf("%.20f\n", d); // 0.99999999999999988898
	// this ought to give the result 1, but instead it gives an unexpected result
	// due to rounding error

	// it is risky to compare floating point numbers with the == operator because it is
	// possible that the values should be equal but they are not due to precision errors.
	// A better way to compare floating point numbers is to assume that two numbers are equal
	// if the difference between them is less than ε, where ε is a small number
	if ((a-b) < 1e-9) {
		// ε = 10^-9
		// a and b are equal
	}

	// SHORTENING CODE
	// Using typedef it is possible to give a shorter name to a datatype
	typedef long long ll;
	ll r = 345544;
	cout << r << "\n";

	typedef vector<int> vi;
	typedef vector<pair<int, int>> vpii;
	typedef pair<int, int> pii;

	int x1 = 2, y1 = 4, x2 = 5, y2= 10;
	int i = 0;
	vpii v;
	// v.push_back(make_pair(y1,x1));
	// v.push_back(make_pair(y2,x2));
	// int n = v[i].first+v[i].second;
	// the above code can be shortened using macros
	v.PB(MP(y1, x1));
	v.PB(MP(y2, x2));
	v.PB({x1, y2});	// introduced in C++11, shorthand for making pair objects
	int n = v[i].F + v[i].S;

	// for (int i = 1; i <= n; i++) {
	// 	// search(i)
	// }
	// The above code can be shortened to
	REP(i,1,n) {
		// search(i)
	}

	// A tuple is a collection of objects of different data types
	// pair is a specific case of tuple
	auto t = MT(23, 543, "hello", 4.55);
	// the auto keyword automatically deduces the type of a variable
	cout << get<2>(t) << "\n"; // hello
	get<1>(t) = 40;
	// get is a generic function for retrieving an item from a tuple
	// get<position>(variable)
	cout << get<1>(t) << "\n";

	return 0;
}
