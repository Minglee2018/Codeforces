#include <bits/stdc++.h>
#define ll long long
#define maxn 200005
using namespace std;
ll n,m,a[maxn],b[maxn];
ll bs(ll l,ll r,ll val){
    ll pos=-1;
    while(l<=r){
        ll m=(l+r)/2;
        if(a[m]<= val){
            pos=m;
            l=m+1;
        }
        else
            r=m-1;
    }
    if(pos==-1) return pos;
    if(a[pos]==val) return pos;
    else
        return pos;
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        if(i==1) continue;
        else
            a[i]+=a[i-1];
    }
    for(int i=1; i<=m; i++) cin>>b[i];
    for(int i=1; i<=m; ++i){
        ll z=bs(1,n,b[i]);
        if(z==-1){
            cout<<1<<" "<<b[i]<<endl;
        }
        else if(z==n ){
            cout<<n<<" "<<a[n]-a[n-1]-(a[n]-b[i])<<endl;
        }
        else{
            if(a[z]==b[i]){
                cout<<z<<" "<<a[z]-a[z-1]<<endl;
                continue;
            }
            cout<<z+1<<" "<<a[z+1]-a[z]-(a[z+1]-b[i])<<endl;
        }
    }
    return 0;
}
