#include <bits/stdc++.h>
using namespace std;
long long n,a[1005];
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0) a[i]--;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
