#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a[100],mxx=-1,p;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(ceil(a[i]/m)>=mxx)
        {
            mxx=ceil(a[i]/m);
            p=i;
        }
    }
    cout<<p+1;
}