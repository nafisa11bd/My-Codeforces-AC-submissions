#include<bits/stdc++.h>
using namespace std;

int countone(int p)
{
    int c=0;
    while(p!=0)
    {
        p=p&p-1;
        c++;
    }
    return c;
}

int main()
{

    int n,m,k;
    cin>>n>>m>>k;

    long int sol[m+1];
    for(int i=0;i<=m;i++)
    {
        cin>>sol[i];
    }
    int countt=0;
    int res=0;

    for(int i=0;i<m;i++)
    {
        res=sol[i]^sol[m];
        if(countone(res)<=k)
        {
            countt++;
        }
    }
    cout<<countt<<endl;

}