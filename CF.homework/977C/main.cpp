#include <bits/stdc++.h>
#define ll long long
#define maxn 200005
using namespace std;
ll a[maxn],n,k;

int main()
{

    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    if(k==0){
        if(a[1]-1>k)
            return cout<<a[1]-1,0;
        else
            return cout<<-1,0;
    }
    else if(k >=n)
        cout<<a[n];
    else
    {
        if(a[k+1]!=a[k])
            cout<<a[k];
        else
            cout<<-1;
    }
}
