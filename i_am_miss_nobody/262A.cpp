#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,s=0,m=0,p;
    cin>>n>>k;
    long long int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(int i=0;i<n;i++)
    {
         while(a[i]!=0)
        {
           p=a[i]%10;
           if(p==4 || p==7)
               {
                   s++;
                   //cout<<"S"<<' '<<s<<endl;
               }
            a[i]=a[i]/10;
        }
        if(s<=k)
        {
         m++;
         //cout<<"M"<<' '<<m<<endl;

        }
        s=0;
    }

    cout<<m<<endl;
}