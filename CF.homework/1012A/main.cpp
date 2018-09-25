#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n+10];
    for(int i=1; i<=2*n; i++) cin>>a[i];
    sort(a,a+n);
    cout<<abs(a[n]-a[1])*abs(a[2*n]-a[n+1]);
    return 0;
}
