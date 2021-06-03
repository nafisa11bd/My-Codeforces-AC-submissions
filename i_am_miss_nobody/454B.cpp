#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,m=-1,n;
    cin>>s;
    int a[s+1];
    for(int i=1; i<=s; i++)
    {
        cin>>a[i];
    }

    for(int i=s; i>=2; i--)
    {
        if(a[i]<a[i-1])
        {
            m=i-1;
           // cout<<a[i]<<endl;
           // cout<<a[i-1]<<endl;
            break;

        }


    }
    //cout<<m<<endl;
    //cout<<"m"<<endl;



    if(m==-1)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        //cout<<m<<endl;
        for(int i=1; i<m; i++)
        {
            if(a[i]>a[i+1])
            {

                cout<<-1<<endl;
                //cout<<"h"<<endl;
                return 0;
            }

        }
        if(a[s]<=a[1]){
        cout<<s-m<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }






}