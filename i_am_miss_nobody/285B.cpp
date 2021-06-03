#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t,step=0;
    cin>>n>>s>>t;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    //cin>>s>>t;
    int pos,visited[100000+5];
    for(int i=1;i<=100000;i++)
    {
        visited[i]=0;
    }
    pos=s;
    visited[pos]=1;
    while(pos!=t)
    {

       pos=a[pos] ;

       if(visited[pos]==1)
       {
           cout<<-1<<endl;
           return 0;
       }
       step++;

       visited[pos]=1;
    }

    cout<<step<<endl;

}