#include <bits/stdc++.h>
#define maxn 2005
using namespace std;
pair <int,int> a[maxn];
int n,k,z;
bool compare( pair<int,int> x,pair <int,int> y){return x.first > y.first;}
bool compare1(pair <int,int> x,pair <int,int> y){return x.second<y.second;}
int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i].first;
             a[i].second=i+1;
    }
    sort(a,a+n,compare);
    for(int i=0; i<k; i++)
        z+=a[i].first;
    cout<<z<<endl;
    sort(a,a+k,compare1);
    int np=0,d=0;
    for(int i=0; i<k; i++)
    {
        if(d==k-1)
            return cout<<n-np,0;
        cout<<a[i].second-np<<" ",np=a[i].second,d++;
    }
}
