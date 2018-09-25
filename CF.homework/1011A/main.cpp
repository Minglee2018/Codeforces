#include <bits/stdc++.h>
using namespace std;
string s;
set <char> m;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n,k,a[27];
    cin>>n>>k>>s;
    for(int i=0; i<n; i++)
        m.insert(s[i]);
    int p=0,z=0,t=1,d=0;;
    for(set <char> :: iterator it=m.begin(); it!=m.end();it++){
            a[p++]=*it-96;
    }
    for(int i=0; i<p; i++)
    {

        if(i==0) {
            z=a[0],d=z;
            continue;
        }
        if(t==k)break;
        else if(a[i]-d>1) z+=a[i],t++,d=a[i];

    }
    if(t<k) return cout<<-1,0;
    cout<<z;
}
