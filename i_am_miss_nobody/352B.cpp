#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,v,ct=0;
    cin>>n;
    set<int> p;
    set<int>::iterator itr;

    int a[n+1];
    int dif[100005],last[100005];
    for(int i=0; i<100005; i++)
    {
        last[i]=-1;
    }
     for(int i=0; i<100005; i++)
    {
        dif[i]=0;
    }

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        v=a[i];
        p.insert(v);
        if(last[v]!=-1)
        {
            if(dif[v]==0)
            {
                dif[v]=i-last[v];
            }
            else if (dif[v]!=i-last[v])
            {
                dif[v]=-1;
            }

        }

        else
            last[v]=i;

        last[v]=i;

           //cout<<dif[2]<<' '<<last[2]<<endl;
    }

    //cout<<dif[1]<<endl;
    for(itr=p.begin();itr!=p.end();itr++)
    {
        if(last[*itr]!=-1 && dif[*itr]!=-1)
        {
            ct++;
        }
    }

 cout<<ct<<endl;
    for(itr=p.begin();itr!=p.end();itr++)
    {
        if(last[*itr]!=-1 && dif[*itr]!=-1)
        {
            cout<<*itr<<' '<<dif[*itr]<<endl;
        }
    }


}