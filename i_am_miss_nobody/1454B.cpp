#include<bits/stdc++.h>
using namespace std;


int cnt[200005]={0};


int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int ans=-1;
        int n,p=INT_MAX,q;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
            //cout<<cnt[a[i]]<<endl;

        }

        for(int i=0; i<n; i++)
        {
            if(cnt[a[i]]==1 && a[i]<p)
            {
                p=a[i];
                ans=i+1;

            }


        }

        cout<<ans<<endl;

        for(int i=0;i<n;i++)
        {
            cnt[a[i]]--;
        }




    }

}