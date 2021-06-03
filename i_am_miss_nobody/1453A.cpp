#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,countt=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;

        cin>>n>>m;
        int a[n+1],b[m+1];
        for(int j=0;j<n;j++)
        {
           cin>>a[j];
        }

        for(int k=0;k<m;k++)
        {
           cin>>b[k];

        }
        for(int k=0;k<m;k++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[k]==a[j])
                {
                    countt++;
                }
            }
        }


        cout<<countt<<endl;
        countt=0;


    }


}