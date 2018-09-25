#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n,m,x,z,sum;
int main()
{
    cin>>n>>m;
    while(n--){
        cin>>x;
        sum+=x;
        cout<<(LL)sum/m-z<<" ";
        z+=(sum/m-z);
    }
    return 0;
}
