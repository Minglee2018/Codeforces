#include <bits/stdc++.h>
using namespace std;
string u[7],v[7],z[7];
int main()
{
    u[1]="purple",v[1]="Power";
    u[2]="orange",v[2]="Soul";
    u[3]="red",v[3]="Reality";
    u[4]="blue",v[4]="Space";
    u[5]="yellow",v[5]="Mind";
    u[6]="green",v[6]="Time";

    int k; cin>>k;
    for(int i=1; i<=k ;i++)
    {
        string s;
        cin>>s;
        for(int j=1; j<=6; j++){
            if(u[j]==s)
                u[j]="",u[j]="0";
        }
    }
    cout<<6-k<<endl;
   for(int i=1; i<=6; i++){
        if(u[i]!="0")
            cout<<v[i]<<endl;
   }
    return 0;
}
