#include <bits/stdc++.h>
using namespace std;
int n,m;
pair <int,int> a[50],b[50];
bool compare(pair <int,int> x,pair<int,int> y)
{
    return x.second < y.second;
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    int j=0;
    for(int i=0; i<m; i++){
        int x;  cin>>x;
       for(int k=0; k<n; k++){
            if(a[k].first==x)
            {
                b[j].first=x;
                b[j].second=k;
                j++;
            }
       }
    }
    sort(b,b+j,compare);
    for(int i=0; i<j; i++)
        cout<<b[i].first<<" ";
    return 0;
}
