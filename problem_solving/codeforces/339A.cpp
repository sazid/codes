#include <iostream>
using namespace std;

int main() {
	string s;
	int book[4] = {0, 0, 0, 0};
	cin >> s;
	int c = 0;
	for (int i=0; i < s.size(); i+=2) {
		book[s[i]-'0']++; 
	}
	int size = -1;
	for (int i=1; i < 4; i++) {
		for (int j=0; j < book[i]; j++) {
			size+=2;
			if (size == s.size()) cout << i << endl;
			else cout << i << "+";
		}
	}
	return 0;
}
