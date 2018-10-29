///Sifat Hassan AIUB
#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define BOOST	    ios_base::sync_with_stdio(false)
#define READ        freopen("IN.txt","r",stdin)
#define WRITE       freopen("OUT.txt","w",stdout)
#define sf          scanf
#define pf          printf
#define F           first
#define S           second
#define CASE(k)     pf("Case %lld: ",k++)
#define mem(x,y)    memset(x,y,sizeof(x))
#define EPS         1e-10
#define INF         LONG_LONG_MAX
#define PII         2.0*acos(0.0)
#define MAX         100000000000
#define MIN         LONG_LONG_MIN
#define pb(k)       push_back(k)
#define NL          printf("\n")
#define MOD         1000000007
#define CHK         pf("ASCHIIIII!!!!!!!!!!!!!\n")
#define sq(x) ((x)*(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))
#define SEGMAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032
#define pii pair<ll,ll>
///graph direction array [4]
///ll X[4]={0,0,1,-1};
///ll Y[4]={1,-1,0,0};
///graph direction array [8]
///int X[8]={0,0,1,-1,-1,1,1,-1};
///int Y[8]={1,-1,0,0,-1,-1,1,1};
ll ele;
// comparison function for sort
//bool asc(LL a,LL b){
//    return a<b;
//}
//
//bool desc(ll a,ll b){
//    return a>b;
//}

///BIGMOD ER CODE
/*
ll big_mod(ll a,ll p)
{
    if(p==0)
        return 1;
    ll half=p/2;
    ll res=0;
    res=big_mod(a,half);
    res=(res*res)%MOD;
    if(p%2!=0)
    {
        res=(res*a)%MOD;
    }
    return res;
}*/
/*
int pff[70];
bool prime[70],chkprime[70];
ll N=60;
vector<ll>fac,pr;
void seieve()
{
    int sqrtn,i,j;
    prime[0]=1,prime[1]=1,prime[2]=0;
    for(i=4;i<=N;i++)
    {
        prime[i]=0;
        if(i%2==0)
            prime[i]=1;
    }
    sqrtn=((int)sqrt((double)N));
    for(i=3;i<=sqrtn;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=N;j+=i+i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(prime[i]==0)
            pr.pb(i);
    }

}
void prime_factor(ll n)
{
    mem(pff,0);
    fac.clear();
    ll s=sqrt(n)+1;
    ll i=1;
    while(pr[i]<=s&&n!=1)
    {
        if(n%pr[i]==0)
        {

        if(pff[pr[i]]==0)
        {
            fac.pb(pr[i]);
            chkprime[pr[i]]=true;
            n=n/pr[i];
            pff[pr[i]]++;
        }
        }
        else
            i++;
    }
    if(n!=1)
    {
        if(pff[n]==0)
        {
            fac.pb(n);
            chkprime[n]=true;
        }
        pff[n]++;
    }
}
*/
///Segmented Sieve
/*
unsigned base[SEGMAX/64],segment[RNG/64],primes[LEN];

void sieve()
{
    unsigned i,j,k;
    for(i=3;i<LMT;i+=2)
    {
        if(!chkC(base,i))
        {
            for(j=i*i,k=i<<1;j<SEGMAX;j+=k)
            {
                setC(base,j);
            }
        }
    }
    for(i=3,j=0;i<SEGMAX;i+=2)
    {
        if(!chkC(base,i))
            primes[j++]=i;
    }
}
int segmented_sieve(int a,int b)
{
    unsigned i,j,k,cnt=(a<=2&&2<=b)?1:0;
    if(b<2)
        return 0;
    if(a<3)
        a=3;
    if(a%2==0)
        a++;
    mem(segment,0);
    for(i=0;sq(primes[i])<=b;i++)
    {
        j=primes[i]*((a+primes[i]-1)/primes[i]);
        if(j%2==0)
            j+= primes[i];
        for(k=primes[i]<<1;j<=b;j+=k)
            if(j!=primes[i])
                setC(segment, (j-a));
    }
    for(i=0;i<=b-a;i+=2)
        if(!chkC(segment, i))
            cnt++;
    return cnt;
}
*/
///Euler PHI
/*
int phi[5000005];
ull sum[5000005];
bool mark[5000005];
void seivephi()
{
    mem(sum,0);
    ll i,j;
    for(i=1;i<=5000002;i++)
        phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2;i<=5000002;i++)
    {
        if(!mark[i])
        {

            for(j=i;j<=5000002;j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}*/

///Number of Divisor
/*
vector<ll>divisors[100002];
vector<pair<ll,ll> > m;
void divisor()
{
    int i,j;
    for(i=1;i<=100002;i++)
    {
        for(j=i;j<=100002;j+=i)
            divisors[j].pb(i);
    }

}*/

ll arr[(int)1e4+5];
int main()
{
    ll t,n,m,k,l;
    sf("%lld",&t);
    while(t--)
    {
        sf("%lld %lld",&n,&k);
        ll ans=1,tmp;
        mem(arr,0);
        tmp=((k)*(k+1))/2;
        double cnt=double(n-tmp)/double(k);
        ll res=(n-tmp)/k;
        ll rem=(n-tmp)%k;
        if(cnt<0)
        {
            pf("-1\n");
            continue;
        }
        for(ll i=0;i<k;i++)
            arr[i]=cnt+i+1;
		
		for(ll i=k-1;i>(k-1-rem);i--) {
			arr[i]++;
		}

        for(ll i=0;i<k;i++)
        {
            ans=(ans*(((arr[i]*arr[i])%MOD)-arr[i]))%MOD;
        }
        pf("%lld\n",ans);
    }
    return 0;
}
