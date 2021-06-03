#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    for(int i=0; i<tt; i++)
    {
        string a;
        int cntt=0;
        int p;


        cin>>p;
        cin>>a;

        for(int j=0;j<p;j++)
        {
           if(a[j]=='r')
           {
               cntt++;
           }
           else
            cout<<a[j];
        }

        for(int j=0;j<cntt;j++)
            cout<<"r";
        cout<<endl;
    }
}