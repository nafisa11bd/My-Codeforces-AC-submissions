#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int m=INT_MAX;
    int p,q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])<m)
        {
            m=abs(a[i]-a[i+1]);
            p=i+1;
            q=i+2;

        }
    }
    if(abs(a[0]-a[n-1])<m)
    {
        cout<<1<<' '<<n<<endl;
    }

    else
        cout<<p<<' '<<q<<endl;

}