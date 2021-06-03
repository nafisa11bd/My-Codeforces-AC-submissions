#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n,k,mx=0,ans=-1;
       cin>>n>>k;
       vector<pair<int,int>> a(n);
       for(auto &j : a)
       {
           cin>>j.first>>j.second;

       }
     for(int j=0;j<n;j++)
     {
         mx=0;
         for(int m=0;m<n;m++)
         {
             mx=max(mx,abs(a[j].first-a[m].first)+abs(a[j].second-a[m].second));


         }
         if(mx<=k)
         {
             ans=1;
         }


     }
     cout<<ans<<endl;

    }

}