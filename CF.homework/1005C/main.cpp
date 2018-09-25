#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[40],b[200005];
map<ll,ll> m,x;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    for(int i=0; i<33; i++) a[i]=pow(2,i),x[a[i]]++;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>b[i];
        m[b[i]]++;
    }
    int z=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<=32; j++){
            ll d=a[j]-b[i],q=0;
            if(m[b[i]]>1 && x[b[i]]!=0)
                {
                    z++;
                    break;
                }
            else if(m[d]!=0 && b[i]!=d)
            {
                z++;
              // cout<<d<<" "<<b[i]<<endl;
               break;
            }
        }
    }
    return cout<<n-z,0;
}
