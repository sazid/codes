#include <bits/stdc++.h>
using namespace std;

int n,k,m,x;
char c;
map<char,int> cost;

int read(int sum=0) {
	//~ memset(cost,0,sizeof(cost));
	cost.clear();
	cin>>k;
	for(int i=0;i<k;++i)cin>>c>>x,cost[c]=x;
	cin>>m;
	string s;
	for(int i=0;i<m;++i){
		getline(cin,s);
		for(char ch:s)sum+=cost[ch];
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n;
	while(n--) cout<<fixed<<setprecision(2)<<(double(read())/100.0)<<'$'<<'\n';
	
	return 0;
}
