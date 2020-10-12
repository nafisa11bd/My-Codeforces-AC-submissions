#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m=0,a[7];
    cin>>n;
    for(i=0;i<7;i++)
    {
        cin>>a[i];
    }

i=0;
     while(m<n)
     {
        m+=a[i];
        i++;
        if(i>6 && m<n)
        {
          i=0;
        }
     }

    cout<<i<<endl;

}