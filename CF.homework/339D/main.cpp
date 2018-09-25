#include <bits/stdc++.h>
#define maxn 101010
using namespace std;
int tree[4*maxn],a[maxn],n,k;
void buid(int node,int l,int r,int f)
{
    if(l==r){
        tree[node]=a[l];
        f=n;
        return ;
    }
    int m=(l+r)/2;
    buid(2*node,l,m,f-1);
    buid(2*node+1,m+1,r,f-1);
    if(f%2==1)
        tree[node]=tree[2*node]|tree[2*node+1];
    else if(f%2==0)
        tree[node]=tree[2*node]^tree[2*node+1];
}
void update(int node,int l,int r,int x,int y,int f)
{
    if(l==r && l==x){
        tree[node]=y;
        return ;
    }
    int m=(l+r)/2;
    if(x<=m)
        update(2*node,l,m,x,y,f-1);
    else
        update(2*node+1,m+1,r,x,y,f-1);
    if(f%2==0)
        tree[node]=tree[2*node]^tree[2*node+1];
    else
        tree[node]=tree[2*node]|tree[2*node+1];
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    freopen("input.txt","r",stdin);
        cin >>n>>k;
        int z=n;
        n=pow(2,n);
        for(int i=1; i<=n; i++) cin>>a[i];
        buid(1,1,n,z);
        while(k--){
            int x,y;
            cin>>x>>y;
            update(1,1,n,x,y,z);
           //for(int i=1; i<=4*n; i++) cout<<tree[i]<<" ";
            cout<<tree[1]<<endl;
        }
        return 0;
}
