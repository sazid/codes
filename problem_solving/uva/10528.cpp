#include <bits/stdc++.h>
using namespace std;

struct contestant {
	int id {0};
	int ac {0};
	int penalty {0};
	bool p {false};
};

bool cmp(contestant &a, contestant &b) {
	if (a.ac != b.ac)
		return b.ac - a.ac;
	if (a.penalty != b.penalty)
		return a.penalty - b.penalty;
	return a.id - b.id;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	getchar();
	string s;
	while (t--) {
		contestant C[101];
		bool ac_board[101][10];
		memset(ac_board, 0, sizeof(ac_board));

		int c, p, t;
		char l;

		while (getline(cin, s)) {
			if (s == "") break;
			sscanf(s.c_str(), "%d %d %d %c", &c, &p, &t, &l);
			C[c].id = c;
			C[c].p = true;
			if (l == 'I') {
				if (ac_board[c][p]) continue;
				C[c].penalty += 20;
			} else if (l == 'C') {
				if (ac_board[c][p]) continue;
				++C[c].ac;
				C[c].penalty += t;
			}

		}

		sort(C, C+101, cmp);

		for(int i=0;i<101;++i){
			if(C[i].p) {
				printf("%d %d %d\n", C[i].id, C[i].ac, C[i].penalty);
			}
		}
		puts("");

	}

	return 0;
}

