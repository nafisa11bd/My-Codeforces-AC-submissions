#include <bits/stdc++.h>
using namespace std;
int main()
{


    int n,p;

    cin>>n;
    int a[n+1],maxx=-1;
    for(int j=0; j<n; j++)
    {
        cin>>a[j];

    }
    sort(a,a+n);
    for(int j=0; j<n; j+=2)
    {
        cout<<a[j]<<' ';
    }
    for(int j=n-1; j>=0; j--)
    {
        if(j%2!=0)
        {
            cout<<a[j]<<' ';
        }
    }
    cout<<endl;





}