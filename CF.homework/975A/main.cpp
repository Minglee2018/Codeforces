#include <bits/stdc++.h>
using namespace std;
map <string,int> v;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        string s;
        map<char,int> m;
        cin>>s;
        for(int i=0; i<s.length(); i++)
            m[s[i]]++;
        string z="";
        for(map<char,int> ::iterator it=m.begin();it!=m.end(); it++)
            z+=(*it).first;
        //cout<<z<<endl;
        v[z]++;
    }
    cout<<v.size();
    return 0;
}
