#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	if (n&1) cout << -((n/2)+1) << endl;
	else  cout << (n/2) << endl;
	return 0;
}
