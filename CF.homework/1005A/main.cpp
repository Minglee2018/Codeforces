#include <bits/stdc++.h>
using namespace std;
map <int,int> m;
int result,n,a[1005];
int main(){
     cin>>n;
     for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
        result=max(result,m[a[i]]);
     }
     cout<<result<<endl;
     for(int i=0; i<n; i++)
         if(a[i]>=a[i+1]) cout<<a[i]<<" ";
     return 0;
 }
