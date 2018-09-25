#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int n,d,c,k=0; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    c=a[0],d=c,a[0]=0;
    sort(a,a+n);
    while(d<=a[n-1]){
        d++;
        a[n-1]--;
        sort(a,a+n);
    }
    return cout<<d-c,0;
}
