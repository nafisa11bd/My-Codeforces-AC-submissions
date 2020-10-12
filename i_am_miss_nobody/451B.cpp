#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n+1],st=-1,endd=n;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<n; i++)
    {
        if(flag)
        {
            if(a[i-1]>a[i])
            {
                flag=false;
                st=i-1;
            }
        }

        else
        {
            if(a[i-1]<a[i])
            {
                endd=i;
                break;
            }
        }



    }

    if(st!=-1)
    {
        reverse(a+st,a+endd);
        for(int i=1; i<n; i++)
        {
            if(a[i-1]>a[i])
            {
                flag=false;
                break;
            }
            else
            {
                flag=true;
            }
        }

    }

    if(flag)
    {
        cout<<"yes"<<endl;
        if(st==-1)
        {
            cout<<1<<' '<<1<<endl;
        }

        else
            cout<<st+1<<' '<<endd<<endl;

    }

    else

    {
        cout<<"no"<<endl;
        return 0;
    }



}