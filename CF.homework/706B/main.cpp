#include <bits/stdc++.h>
#define maxn 100005
#define LL long long
using namespace std;

vector <LL> bs;int n,q;

int Dp(LL val)
{
    int l=0,r=bs.size()-1,pos=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(bs[m]<=val)
            pos=m,l=m+1;
        else
        r=m-1;
    }
    return pos;
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    while(n--){
        int x; cin>>x;
        bs.push_back(x);
    }
    sort(bs.begin(),bs.end());
    cin>>q;
    while(q--){
        LL z,d; cin>>z;
        d=Dp(z);
        if(d==-1)
            cout<<0<<endl;
        else
            cout<<d+1<<endl;
    }
    return 0;
}
