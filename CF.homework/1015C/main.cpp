#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[100005],total;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    vector <ll> pb;
    cin>>n>>m;
    for(int i=0; i<n ;i++){
        ll x,y;
        cin>>x>>y;
        total+=x;
        pb.push_back(x-y);
    }
    sort(pb.begin(),pb.end());
    reverse(pb.begin(),pb.end());
    ll ans=0;
    for(int i=0; i<pb.size(); i++){
        if(total<=m) break;
        ans++;
        total-=pb[i];
    }
    if(total >m) cout<<-1;
    else cout<<ans;
    return 0;
}
