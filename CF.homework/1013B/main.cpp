#include <bits/stdc++.h>
#define LL long long
#define maxn 100009
using namespace std;
long long n,m,ans=-1,v,a[maxn],b[maxn];
int main()
{
    //freopen("input.txt","r",stdin);
     ios_base::sync_with_stdio(false),cin.tie(NULL);
     for(cin>>n>>m; n--;)
     {
         cin>>v;
        if(a[v]>0)ans=0;
        if(ans!=0)if(a[v&m] || b[v]) ans=1;
        if(ans!=0 && ans!=1) if(b[v&m]) ans=2;
        a[v]++;
        b[v&m]++;
     }

     cout<<ans;

     return 0;
}
