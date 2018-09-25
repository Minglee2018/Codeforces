#include <bits/stdc++.h>
using namespace std;
map <string,string> m;

int main()
{
    int n,d;
    cin>>n>>d;
    for(int i=0; i<n; i++){
        string x,y;
        cin>>x>>y;
        y+=";";
        m[y]=x;
    }
    while(d--){
        string x,y;
        cin>>x>>y;
        cout<<x<<" "<<y<<" #"<<m[y]<<endl;
    }
    return 0;
}
