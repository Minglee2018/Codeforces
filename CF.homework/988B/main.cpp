#include <bits/stdc++.h>
using namespace std;
bool compare(string x,string y)
{
    return x.length()<y.length();
}
int main()
{
    string s[111];
    int n,i;
    for(cin>>n,i=0; i<n; i++) cin>>s[i];
    sort(s,s+n,compare);
    for(int i=0; i<n-1; i++){
        int z=s[i+1].find(s[i],0);
        if(z==-1)
            return cout<<"NO",0;
    }
    for(cout<<"YES"<<endl,i=0; i<n ;i++) cout<<s[i]<<endl;
    return 0;
}
