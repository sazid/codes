#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,l,r,m,v,j,d1,d2,s1,s2;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m>>v>>l>>r;
        if(l%v==0) l=l-v;
        s1=((l-l%v)-v)/v+1;
        s2=((m-m%v)-(r+v-r%v))/v+1;
        cout<<s1+s2<<endl;
    }
}