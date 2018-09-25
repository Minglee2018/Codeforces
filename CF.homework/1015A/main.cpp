#include <bits/stdc++.h>
using namespace std;
int a[111],n,m;
bool b[111];
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n>>m;
    while(n--){
        int l,r;
        cin>>l>>r;
        for(int i=l; i<=r; i++)
            b[i]=true;
    }
    vector <int> ans;
    int k=0;
    for(int i=1; i<=m; i++){
        if(b[i]==false)
        {
            k++;
            ans.push_back(i);
        }
    }
    cout<<k<<endl;
    for(int i=0; i<ans.size();i++)
        cout<<ans[i]<<" ";
}
