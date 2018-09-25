#include <bits/stdc++.h>

using namespace std;
vector <string> a;
map <string,int>m;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<2*n; i++){
        string x; cin>>x;
        if(i<n)
            a.push_back(x);
        else m[x]++;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(m[a[i]]==0) ans++;
        else
            m[a[i]]--;
    }
    cout<<ans;
    return 0;
}
