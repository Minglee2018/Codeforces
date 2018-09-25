#include <iostream>

using namespace std;

int main()
{
   long long n,m,a,b,z=0,d=0;
   cin>>n>>m>>a>>b;
   cout<<min((m-n%m)*a,(n%m)*b);
    return 0;
}
