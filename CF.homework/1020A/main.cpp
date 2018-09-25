#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cin>>n>>m>>i>>j>>k;
    while(k--){
        int a,b,c,d,z=0;
        cin>>a>>b>>c>>d;
        if(a==c){
            cout<<abs(d-b)<<endl;
            continue;
        }
        if(b>j && d>j){
            z+=abs(b-j)+abs(d-j);
        }
        else if(b<i && d<i){
            z+=abs(b-i)+abs(d-i);
        }
        else{
            z+=abs(d-b);
        }
        z+=abs(c-a);
        cout<<z<<endl;
    }
    return 0;
}
