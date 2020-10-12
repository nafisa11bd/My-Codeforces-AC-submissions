#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[200000];
    int sa=0,k,p=0,m=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            cin>>a[j];
        }

        for(k=1; k<n; k++)
        {


            if(abs(a[k]-a[k+1])>=2)
            {

                sa++;

                p=k;
                m=k+1;
                break;

            }
        }
        if (sa==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<p<<" "<<m<<endl;
        }
        sa=0;

    }

}