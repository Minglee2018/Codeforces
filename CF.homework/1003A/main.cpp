#include <bits/stdc++.h>
using namespace std;
map <int,int> m;
int a[105],n,result;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
        result=max(result,m[a[i]]);
    }
    cout<<result;
    return 0;
}
