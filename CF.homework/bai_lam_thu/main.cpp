#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=1;
    cout<<"nhap gia tri cua n";cin>>n;
    float s=0;
    while(i<=n)
    {
        s=s+(float)1/i;
        i++;
    }
    cout <<s<< endl;
    return 0;
}
