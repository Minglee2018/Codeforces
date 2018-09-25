#include <bits/stdc++.h>
using namespace std;
bool f(char x)
{
    string v="a,o,u,i,e";
    int z=v.find(x,0);
    if(z!=-1) return true;
    return false;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(f(s[i])==false && f(s[i+1])==false && s[i]!='n')
            return cout<<"NO",0;
    }
     return cout<<"YES",0;
}
