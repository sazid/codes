#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	int numerator = 6-max(a,b)+1;
	int denominator = 6;
	int g = __gcd(numerator, denominator);
	cout << numerator/g << '/' << denominator/g;
	
	return 0;
}
