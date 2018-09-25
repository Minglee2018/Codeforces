#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int i,n;
    for(cin>>n,i=0; i<n;i++)
    {
        int x; cin>>x;
        a[x]++;
    }
    int m;
    bool KT=false;
    for(cin>>m,i=0; i<m; i++){
        int x; cin>>x;
        if(a[x]>0) KT=true;
    }
    if(KT) cout<<"Mang giao nhau";
    else
        cout<<"Mang ko giao nhau";
    return 0;
}
