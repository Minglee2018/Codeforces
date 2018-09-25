#include<bits/stdc++.h>
using namespace std;
bool f(char x,char y,char z)
{
    map <char,int> m;
    m[x]++;
    m[y]++;
    m[z]++;
    if(m.size()==3) return true;
    else
        return false;
}
int main()
{
    string s; cin>>s;
	for(int i=1; i<s.length()-1;i++){
        if(s[i]!= '.' && s[i-1]!= '.' && s[i+1]!= '.')
            if(f(s[i-1],s[i],s[i+1]) )
               return cout<<"Yes",0;
	}
		cout<<"No";
}
