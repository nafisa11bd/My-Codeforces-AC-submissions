#include<bits/stdc++.h>
using namespace std;
long long int usedb[1000000],takea[1000000];
void used()
{
    for(int i=0; i<1000000; i++)
    {
        usedb[i]=0;
    }
}
void take()
{
    for(int i=0;i<1000000;i++)
    {
       takea[i]=0;
    }
}
int main()
{

    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1],countt=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    take();
    used();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(usedb[j]==0 && takea[i]==0)
        {
            if(a[i]<=b[j])
                {
                    usedb[j]=1;
                    takea[i]=1;

                    break;
                }
            }
        }
    }



    for(int i=0;i<n;i++)
    {
        if(takea[i]==0)
            countt++;
    }

    cout<<countt<<endl;


}