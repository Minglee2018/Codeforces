#include <bits/stdc++.h>
using namespace std;
long long a[100009],b[100009],n,m;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    m=a[n];
    for(int i=n-1; i>=1; i--){
        if(m>=a[i]) b[i]=m+1-a[i];
        else if(m<a[i])
        {
            m=a[i];
        }
    }
    for(int i=1; i<=n; i++)
        cout<<b[i]<<" ";
    return 0;
}
