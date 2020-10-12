#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1,d=0,m=0;
    cin>>n;
    int a[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
     m=a[0];
    for(int i=0;i<n;i++)
    {
         if(a[i]<m){
                m=a[i];
          p=i+1;

         }


    }
   // cout<<m<<endl;


    for(int i=0;i<n;i++)
    {
        if(a[i]==a[p-1] && i!=p-1)
            d=1;
    }
    if(d==1)
        cout<<"Still Rozdil"<<endl;
    else
    cout<<p<<endl;



}