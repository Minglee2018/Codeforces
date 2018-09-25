#include <bits/stdc++.h>
using namespace std;
 int n,m,a[101],x;
 int main()
 {
     cin>>n>>m;
     for(int i=0; i<m; i++) cin>>x,a[x]++;
     for(int i=1; i<555;  i++){
            int z=0;
        for(int j=1; j<101;j++){
            z+=a[j]/i;
        }
        if(z<n)
        {
            cout<<i-1;
            return 0;
        }
    }
 }
