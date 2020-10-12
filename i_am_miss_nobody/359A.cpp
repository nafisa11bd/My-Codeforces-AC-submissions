#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,p;
    bool two=false;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>p;
            if(p==1)
            {
                if(i==1 || i==n)
                    two=true;
                if(j==1 || j==m)
                    two=true;

            }

        }


    }
    if(two)
    {
        cout<<2<<endl;
    }

    else
        cout<<4<<endl;



}