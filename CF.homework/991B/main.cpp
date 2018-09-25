#include <bits/stdc++.h>
using namespace std;
int n,a[109];
bool f(int sum){return sum*10>=45*n;}
bool compare(int x,int y) {return x>y;};
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
     cin>>n;
     int sum=0;
     for(int i=0; i<n; i++){
        int x; cin>>x;
        sum+=x;
        a[i]=5-x;
     }
     sort(a,a+n,compare);
     int j=0;
     while(!f(sum)) {
        sum+=a[j++];
     }
     return cout<<j,0;
 }
