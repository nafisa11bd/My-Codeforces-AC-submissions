#include<bits/stdc++.h>
#include <cstddef>
using namespace std;
int main()
{

    int q;
    int n;
    int a[100];
    int c=0;
    int m=0;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }

        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(abs(a[i]-a[j+1])==1)
                {
                    c++;
                    a[i]=0;
                    a[j+1]=0;
                }
                    else if(abs(a[i]-a[j+1])==0)
                        m++;
                    //cout<<a[i]<<' '<<a[j+1]<<endl;
                    //cout<<c<<endl;

            }
        }
        if (c==0)
            cout<<c+1<<endl;
        else if((m>0)&&(c>0))

            cout<<c<<endl;
        else if((c>0)&&(m==0))
            cout<<c<<endl;
        else if (c==1)
                cout<<c+1<<endl;
        c=0;
        m=0;
    }
}