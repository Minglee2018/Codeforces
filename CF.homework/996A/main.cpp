#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[5]={100,20,10,5,1};

    long long n,i=0,ans=0; cin>>n;
    while(true){
        ans+=n/a[i];
        n=n%a[i];
        i++;
        if(n==0) break;
    }
    cout<<ans;
    return 0;
}
