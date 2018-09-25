#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int n,d;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n>>d;
    for(int i=0; i<n; i++){
        int x,z1,z2;
        cin>>x;
        z1=x-d,z2=x+d;
        if(i==0){
                a.push_back(z1),a.push_back(z2);
                continue;
            }
        if(z1>a.back()) a.push_back(z1); else if(z1<a.back()) a.pop_back();
        if(z2>a.back()) a.push_back(z2); else if(z2<a.back()) a.pop_back();
    }
    return cout<<endl<<a.size(),0;
}
