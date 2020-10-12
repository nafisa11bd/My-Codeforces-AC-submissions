#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[10000],b[10000],ans,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ans=-1;
        for(int i=1;i<=1024;i++)
        {
            ct=0;
            for(int j=0;j<n;j++)
            {
                b[j]=a[j]^i;
            }
            sort(b,b+n);
            for(int j=0;j<n;j++){

                if(a[j]!=b[j])
                {
                    ct=1;
                    break;
                }

            }
                if(ct==0)
                {
                    ans=i;
                    break;
                }



        }
        cout<<ans<<endl;





    }




}