#include <bits/stdc++.h>

using namespace std;
vector <int> a;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int k;
    string s; cin>>s>>k;
    for(int i=0; i<s.length(); ++i){
        int x=s[i]-'0';
        a.push_back(x);
    }
    while(k--){
        if(a[a.size()-1]==0)
            a.pop_back();
        else
            a[a.size()-1]--;
    }
    for(int i=0; i<a.size(); i++) cout<<a[i];
    return 0;
}
