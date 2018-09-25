#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int a[n],ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0) ans=a[0]+1;
        else{
            if(a[i]>=a[i-1]) ans+=2+abs(a[i]-a[i-1]);
                else
                {
                    ans+=(2+abs(a[i]-a[i-1]));
                }
        }
    }
    cout<<ans;
}
