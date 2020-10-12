#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100],b[100],i,j=0,x;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(i=0; i<n; i++)
        {
            x=i;
            b[i]=2*a[i]*((x-i)+i+x);

        }

    }

for(i=0;i<n;i++)
    j=j+b[i];
cout<<j;





}