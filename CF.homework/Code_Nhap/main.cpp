#include <bits/stdc++.h>
using namespace std;
void xoa(char a[],int vitri)
{
    int n=strlen(a);
    for(int i=vitri; i<n; i++)
    {
        a[i]=a[i+1];
    }
}
int main()
{
    char s[100],p[50];
    gets(s);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;

    }
    // nhap vao ho ten xoa tat ca chu cai x trong ho ten do.
    char x;
    cin>>x;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==x)
        {
            xoa(s,i);
            i--;
        }
//        //if(i>0)
//            i--;
       // cout<<i<<" ";
    }
    cout<<s;
    return 0;
}
