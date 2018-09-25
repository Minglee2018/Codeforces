#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,z=0,n; string s;
    cin>>n>>k>>s;
    for(int i=0; i<n-1;i++)
        if(s.substr(0,i+1)==s.substr(n-i-1))
                z=i+1;
    cout<<s,k--;
    while(k--) cout<<s.substr(z);
    return 0;
}
