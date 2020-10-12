#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n,m,maxx=1,minn=INT_MAX,minnb=INT_MAX,v,p,c,ans;
    cin>>n>>m;
    int a[n+1],b[m+1];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<minn)
        {
            minn=a[i];
        }
        if(a[i]>maxx)
        {
            maxx=a[i];
        }

    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]<minnb)
        {
            minnb=b[i];
        }


    }

    c=minnb;
    v=minn;
    p=maxx;
    ans=max(2*v,p);
    if(ans<c)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;





    //cout<<minn<<' '<<maxx<<endl;



}