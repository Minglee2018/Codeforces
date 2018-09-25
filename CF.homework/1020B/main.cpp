#include <bits/stdc++.h>
using namespace std;
int a[1010],n;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        map<int,int> m;
        int z=i;
        while(true){
            m[z]++;
            z=a[z];
            if(m[z]==2) {
                cout<<z<<" ";
                break;
            }
        }
    }
    return 0;
}
