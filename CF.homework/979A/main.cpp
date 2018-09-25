#include <iostream>

using namespace std;
int main()
{
    long long n; cin>>n;
    if(n==0) return cout<<0,0;
    n%2==0?cout<<n+1:cout<<(n+1)/2;
}
