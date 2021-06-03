#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if (n%2==0)
        {
           for(int j=n;j>=1;j--)
           {
               cout<<j<<' ';
           }
           cout<<endl;
        }

        else if(n%2!=0)
        {
            for(int j=2;j<=n;j++)
                cout<<j<<' ';
            cout<<1<<endl;
        }


    }



}