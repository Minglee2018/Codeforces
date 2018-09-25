#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    vector <int> a;
    int n; cin>>n;
    string t,s;
    cin>>t>>s;

    if(t==s)
        {
            return cout<<0,0;
        }
    else
        {
            for(int i=0; i<=n-1; i++){
                if(t[i]!=s[i]){
                    int z=t.find(s[i],i);
                    if(z==-1)   return cout<<-1,0;
                    else
                    {
                        for(int j=z-1; j>=i; j--){
                            a.push_back(j+1);
                            swap(t[j],t[j+1]);
                        }
                    }
                }
            }

        }
        cout<<a.size()<<endl;
        for(int i=0; i<a.size(); i++)
            cout<<a[i]<<" ";
}
