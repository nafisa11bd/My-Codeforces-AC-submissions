#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m=0,p=INT_MAX,q;
    cin>>n;
    int c[n+1];
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
    {

        m=0;
        while(c[i]--)
        {
          cin>>q;
          m+=(q*5)+15;
        }

        p=min(m,p);

    }
    cout<<p<<endl;




}