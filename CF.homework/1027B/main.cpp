#include <bits/stdc++.h>
#define maxn 10
using namespace std;
long long n,q;
int main()
{
   cin>>n>>q;
   long long p;
    if(n%2==0)
    {
        p=(n*n)/2+1;
    }
    else
    {
       p=(n*n)/2;
    }
     while(q--)
     {
         long long i,j;
         cin>>i>>j;
         if(i==j && i==1) {
                cout<<1<<endl;
                continue;
         }
         if((i+j)%2==0){
            long long z=(j-1)/2+1,d=(i-1)*n/2-i/2;
            cout<<z+d<<endl;
         }
         else
         {
             long long d=(i-1)*n/2+((i-1)/2+1),z=0;
             i%2!=0?z=j/2:z=(j/2+1);
             cout<<d+z+p<<endl;
         }

     }

    return 0;
}
