#include <bits/stdc++.h>
using namespace std;
pair<int,string> a[10];
int main()
{
    freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n,i; string s;
    for(cin>>n,i=1; i<=3; i++)
    {
        cin>>s; int k=0,m=s.length();
        map <char,int> z;
        //cout<<m<<endl;
        for(int i=0; i<m;i++)
        {
            z[s[i]]++,k=max(k,z[s[i]]);
        }
        cout<<k<<" "<<m<<" "<<n<<endl;
        if(i==1)
            {
                (k+n)>m?a[i].first=m-(k+n-m):a[i].first=k+n;
                a[i].second="Kuro";
            }
        else if(i==2)
        {
            (k+n)>m?a[i].first=m-(k+n-m):a[i].first=k+n;
            a[i].second="Shiro";
        }
        else
            {
                (k+n)>m?a[i].first=m-(k+n-m):a[i].first=k+n;
                a[i].second="Katie";
            }
           // cout<<a[i].first<<" ";
    }
    sort(a+1,a+1+3);
    if(a[2].first==a[3].first)
        return cout<<"Draw",0;
    else
        cout<<a[3].second;
    return 0;
}
