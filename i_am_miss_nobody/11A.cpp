#include<iostream>
using namespace std;
long long int  i,n,a[2001],d,ans=0,k;
int main()
{
    cin>>n>>d;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        while (a[i]<=a[i-1])
        {
           k= (a[i-1]-a[i])/d +1;
              ans+=k;
         a[i]=a[i]+d*k;
        }


    cout<<ans;
}