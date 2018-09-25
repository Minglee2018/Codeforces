#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,ans,a[200005];
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    ll k=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
            ans+=abs(a[i]-k);
            k=a[i];
    }
    return cout<<ans,0;
    return 0;
}
