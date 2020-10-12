#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no[1000],m,minn=0,maxx=0,sm=0,lrg=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>no[i];
    }
    minn=no[0];
    maxx=no[0];

    for(int i=0;i<m;i++)
    {
        if (minn>no[i])
        {
            minn=no[i];
            sm++;
        }

        if (maxx<no[i])
        {
            maxx=no[i];
            lrg++;
        }
    }

    cout<<lrg+sm<<endl;

}