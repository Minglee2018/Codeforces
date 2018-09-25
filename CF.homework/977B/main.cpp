#include <bits/stdc++.h>

using namespace std;
map <string,int> m;
string s;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n;string s;
    cin>>n>>s;
    for(int i=1; i<s.length(); i++){
        string a="";
        a+=s[i-1];
        a+=s[i];
        m[a]++;
    }
    string ans; int z=0;
    for(map<string,int> :: iterator it=m.begin(); it!=m.end(); it++){
        if(z<(*it).second){
            z=(*it).second;
            ans=(*it).first;
        }
    }
    return cout<<ans,0;
}
