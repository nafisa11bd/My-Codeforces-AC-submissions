#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,l=0,r=0;
    char a[100000];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]=='L')
            l++;
        else if(a[i]=='R')
            r++;
    }
    cout<<l+r+1<<endl;
}