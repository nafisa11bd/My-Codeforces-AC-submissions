#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,range=0,ans=INT_MAX,flag;
    cin>>n>>m;
    int a[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m;i++)
    {
        range=i+n-1;
        if((range)==m)
            break;
        else
        {
          flag=(a[range]-a[i]);
          //cout<<a[range]<<' '<<a[i]<<endl;
          //cout<<flag<<endl;
          if(flag<ans)
                ans=flag;
        }
        //cout<<a[i+n-1]<<endl;

    }
cout<<ans<<endl;

}