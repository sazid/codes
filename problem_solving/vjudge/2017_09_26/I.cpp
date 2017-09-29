#include <bits/stdc++.h>
#define CBIT(var, shift) ((var) & (1 << (shift)))
using namespace std;

typedef unsigned long long ll;
vector<ll> nums;

void calculate() {
    nums.push_back(0);
    for (int a = 0; a < 10; a++) {
    	ll power = pow(2, a+1);
        for (int b = 0; b < power; b++) {
            ll num = 0;
            for (int c = 0; c <= a; c++) {
                if (CBIT(b, c)) {
                    if (num == 0) {
                        num = 7;
                    } else {
                        num = num * 10 + 7;
                    }
                } else {
                    if (num == 0) {
                        num = 4;
                    } else {
                        num = num * 10 + 4;
                    }
                }
            }
            nums.push_back(num);
        }
    }
}

int main() {
    calculate();
    sort(nums.begin(), nums.end());

    ll n;
    cin >> n;
    for (ll i = 1; i < nums.size(); i++) {
    	if (nums[i] == n) {
    		cout << i << endl;
    	}
    }

    return 0;
}