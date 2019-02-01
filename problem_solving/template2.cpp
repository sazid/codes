#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int (i)=0; (i)<(n); ++(i))
#define rrep(i,n) for(int (i)=(1); (i)<=(n); ++(i))
#define all(x) ((x).begin(), (x).end())
#define maxa(a,b) ((a)=max((a),(b)))
#define mina(a,b) ((a)=min((a),(b)))
#define pb push_back
#define sz(x) ((int)x.size())
#define vT(T) vector<T>
#define vvT(T) v(v(T))

using namespace std;
typedef long long int ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;

// helpers
template<typename T>inline istream& operator>>(istream&i,vT(T)&v)
{rep(j,sz(v))i>>v[j];return i;}
template<typename T>string join(const vT(T)&v)
{stringstream s;rep(i,sz(v))s<<' '<<v[i];return s.str().substr(1);}
template<typename T>inline ostream& operator<<(ostream&o,const vT(T)&v)
{if(sz(v))o<<join(v);return o;}
template<typename T1,typename T2>inline istream& operator>>(istream&i,pair<T1,T2>&v)
{return i>>v.fi>>v.se;}
template<typename T1,typename T2>inline ostream& operator<<(ostream&o,const pair<T1,T2>&v)
{return o<<v.fi<<","<<v.se;}
template<typename T>inline ll suma(const vT(T)& a) { ll res(0); for (auto&& x : a) res += x; return res;}

void read() {
}

void solve() {
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	read();
	solve();

	return 0;
}

