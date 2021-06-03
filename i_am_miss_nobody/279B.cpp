#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0,k=0,countt=0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>t)
        {
            sum-=a[k];
            k++;
        }
        else if(sum<=t)
        {
            countt++;
        }
    }

    cout<<countt<<endl;
}