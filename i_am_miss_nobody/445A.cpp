#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n,m;
    cin>>n>>m;
    char p[n+10][m+10];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>p[i][j];

            if(p[i][j]=='.')
            {
                if((i+j)%2==0)
                {
                    p[i][j]='W';
                }
                    else
                        p[i][j]='B';



            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<p[i][j];
            //cout<<' ';

        }
        cout<<endl;
    }
    cout<<endl;

}