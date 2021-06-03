#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,earn=0,ct=0,neg=0,zero=0;
    cin>>n>>m;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i<0])
        {
            neg++;
        }
        if(a[i]==0)
        {
            zero++;
        }

    }

    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            a[i]=a[i]*(-1);
            earn+=a[i];
            ct++;

        }
        else if(a[i]==0)
        {
            if(neg==0 && zero>0)
            {
                ct++;
            }

        }
        if(ct==m)
        {
            break;
        }
    }

    cout<<earn<<endl;
}