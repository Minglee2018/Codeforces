#include <bits/stdc++.h>
using namespace std;
map <int,int> m;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
     int n;
     cin>>n;
     while(n--){
        int x; cin>>x;
        if(x==0)
            continue;
        else
        m[x]++;
     }
     return cout<<m.size(),0;
 }
