#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator ()(char a, char b) {
        return a>b;
    }
};
map <int,int,cmp> z;
int main()
{

    int n,k,x=0;
    cin>>n>>k;
    int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
        z[a[i]]++;
    }
    if(z.size()<k) return cout<<"NO",0;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            if(z[a[i]]>1) cout<<i+1<<" ",x++,z[a[i]]=-1;
            else if(z[a[i]]==1) cout<<i+1<<" ",x++;
            if(x==k)
                break;
        }
    }
    return 0;
}
