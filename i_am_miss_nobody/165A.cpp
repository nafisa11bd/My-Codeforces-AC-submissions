#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pair<int,int>point;
    int n,a,b,c,d,result=0;

    cin>>n;
    int x[n+1],y[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0; i<n; i++)
    {
        a=0,b=0,c=0,d=0;
        for(int j=0; j<n; j++)
        {
            if(x[i]==x[j] && y[i]>y[j])
            {
                a=1;
            }
            if(x[i]==x[j] && y[i]<y[j])
            {
                b=1;
            }
            if(x[i]>x[j] && y[i]==y[j])
            {
                c=1;
            }
            if(x[i]<x[j] && y[i]==y[j])
            {
                d=1;
            }
        }
        if(a==1 && b==1 && c==1 && d==1)
            result++;


    }

    cout<<result<<endl;



}