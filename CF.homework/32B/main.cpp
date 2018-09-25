#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,v=""; cin>>s;
    s+=" ";
    for(int i=0; i<s.length(); i++){
        if(s[i]=='-' && s[i+1]=='.') v+='1',i++;
        else if(s[i]=='-' && s[i+1]=='-') v+='2',i++;
        else if(s[i]=='.') v+='0';

    }
    cout<<v;
    return 0;
}
