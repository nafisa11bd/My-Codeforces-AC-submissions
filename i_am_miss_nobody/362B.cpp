#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int b[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);

    if(b[0]==1 || b[m-1]==n)
    {
        cout<<"NO\n";
        return 0;
    }

    else
    {
        bool flag =true;
        for(int i=0;i<m-2;i++)
        {
            if(b[i+2]==b[i]+2)
            {
               flag=false;
               break;
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO\n";
    }





}