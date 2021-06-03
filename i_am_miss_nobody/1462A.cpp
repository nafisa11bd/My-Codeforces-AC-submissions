#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,q;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int b[n+1];
        int p=0;
        q=n/2;

        while(q--)
        {
            cout<<a[p]<<' ';
            p++;
            cout<<a[n-p]<<' ';


        }

        if(n%2!=0)
            cout<<a[p];
        cout<<endl;

    }

}