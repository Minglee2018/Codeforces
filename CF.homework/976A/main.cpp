#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    int n; cin>>n>>s;
    sort(s.begin(),s.end());
    string d="";
    for(int i=0; i<s.length();i++)
        {
            if(s[i]=='0') d+=s[i];
            if(s[i]=='1') {
                d+=s[i];
                break;
            }
        }
    for(int i=d.length()-1; i>=0; i--)
        cout<<d[i];
    return 0;
}
