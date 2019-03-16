#include <bits/stdc++.h>
using namespace std;

int _left[(int)1e5+5], _right[(int)1e5+5];
int s, b;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (cin >> s >> b && (s || b)) {
		for (int i = 1; i <= s; ++i) {
			_left[i] = i-1;
			_right[i] = i+1;
		}

		int l, r;
		while (b--) {
			cin >> l >> r;

			if (_left[l] != l-1 && _right[r] != r+1) {
				cout << "Inside first\n";
			}
			else if (_left[l] != l-1)
			{
				cout << "Inside second\n";
				int i;
				for (i = r-1; _left[i] == i-1; --i) {
					_right[i] = _right[i+1];
				}
				_right[i] = _right[i+1];

				for (i = i+1 ; i <= r; ++i) {
					_left[i] = _left[i-1];
				}
			}

			else if (_right[r] != r+1)
			{
				cout << "Inside third\n";
				int i;
				for (i = l+1; _right[i] == i+1; ++i) {
					_left[i] = _left[i-1];
				}
				_left[i] = _left[i-1];

				for (i = i-1 ; i >= l; --i) {
					_right[i] = _right[i+1];
				}
			}

			else if (_left[l] == l-1 && _right[r] == r+1)
			{
				cout << "Inside fourth\n";
				for (int i = l; i <= r; ++i) {
					if (i > l) _left[i] = _left[i-1];
					if (i < r) _right[i] = _right[i+1];
				}
				if (_left[l-1] != l-2 && l-1 > 1) _left[l] = _left[l-1];
				if (_right[r+1] != r+2 && r+1 < s) _right[r] = _right[r+1];
			}

			if (_left[l] == 0) cout << "* ";
			else cout << _left[l] << ' ';

			if (_right[r] == s+1) cout << "*\n";
			else cout << _right[r] << '\n';
		}

		cout << "-\n";
	}

	return 0;
}

