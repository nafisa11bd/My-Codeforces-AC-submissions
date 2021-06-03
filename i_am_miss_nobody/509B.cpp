#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int minn=10000;
    int maxx=-1;
    int a[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<minn)
        {
            minn=a[i];
        }
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }

   // sort(a,a+n);
    if(maxx-minn>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        cout<<"YES"<<endl;

        for(int i=0;i<n;i++)
        {
            int m=1;
            for(int j=0;j<a[i];j++)
            {
                if(j<=minn)
                {
                    cout<<1<<' ';
                }
                else
                {
                    m++;
                    cout<<m<<' ';
                }
            }
            cout<<endl;
        }
    }


}