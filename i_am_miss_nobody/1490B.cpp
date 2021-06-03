#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,c0=0,c1=0,c2=0,ans=0,extra;
        cin>>n;
        int a[n+1];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
            if(a[j]%3==0)
            {
                c0++;
            }
            else if(a[j]%3==1)
            {
                c1++;
            }
            else if(a[j]%3==2)
            {
                c2++;
            }


        }
        if(c0 > n/3)
        {
            extra = c0-n/3;
            ans += extra, c1 += extra;
            c0 = n/3;
        }

        if(c1 > n/3)
        {
            extra = c1-n/3;
            ans += extra, c2 += extra;
            c1 = n/3;
        }

        if(c2 > n/3)
        {
            extra = c2-n/3;
            ans += extra, c0 += extra;
            c2 = n/3;
        }

        if(c0 > n/3)
        {
            extra = c0-n/3;
            ans += extra, c1 += extra;
            c0 = n/3;
        }

        cout<<ans<<endl;


    }
}