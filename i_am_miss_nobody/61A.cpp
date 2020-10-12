#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101],b[101];
    int m;
    cin>>a;
    cin>>b;
    for(int i=0; a[i]!='\0'; i++)
    {


        if((a[i]=='0' && b[i]=='0')||(a[i]=='1' && b[i]=='1'))

            cout<<0;
        else if((a[i]=='0' && b[i]=='1')||(a[i]=='1' && b[i]=='0'))
            cout<<1;

    }
}