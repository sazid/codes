#include <bits/stdc++.h>
using namespace std;

int N,mn;
string s;
vector<int> cnt;

inline void solve() {
	int sm=0;
	for(int&i:cnt)sm+=abs(i-mn);
	cout<<sm<<'\n';
}

void read() {
	while (cin >> N && N > 0) {
		cnt.resize(N);
		mn=INT_MAX;
		for(int i=0;i<N;++i) {
			getline(cin,s);
			cnt[i]=count(s.begin(),s.end(),' ');
			cout<<cnt[i]<<endl;
			mn=min(mn,cnt[i]);
			cout<<mn<<endl;
		}
		if(N==1){
			cout<<0<<'\n';
			continue;
		}
		solve();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	read();
	
	return 0;
}

/* 
4
XXXX                XXXXX
XXX               XXXXXXX
XXXXX                XXXX
XX                 XXXXXX
0
*/
