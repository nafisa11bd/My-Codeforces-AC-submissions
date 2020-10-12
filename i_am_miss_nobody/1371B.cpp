#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int n,r,ans=0;
        cin>>n>>r;
        if(n>r)
            ans=(r*(r+1))/2;
        else
        {
            n=n-1;
            ans=((n*(n+1))/2) +1;
        }
        cout<<ans<<endl;

    }

}