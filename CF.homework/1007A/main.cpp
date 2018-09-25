#include <bits/stdc++.h>
#define maxn 100005
#define ll long long
using namespace std;
ll n,a[maxn],b[maxn];
ll tknp(ll left,ll right,ll x)
{
    ll l=left,r=right,pos=-1;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(a[m]>x){
            pos=m;
           r=m-1;
        }
        else
            l=m+1;
    }
    return pos;
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    ll j=0,l=0,r=n-1,result=0;
    for(ll i=n-1; i>=0; i--) b[j++]=a[i];
    for(ll i=0; i<n; i++){
            if(tknp(l,r,b[i])==-1) l++,result++;
            else r--;
    }
    return cout<<n-result,0;
}
