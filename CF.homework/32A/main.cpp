#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n,d,f,a[1010];

int main()
{
    cin>>n>>d;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-1; i++){
        for(int j=1+i; j<n; j++)
            if(abs(a[i]-a[j])<=d)
                f+=2;
    }
    cout<<f;
        return 0;
}
