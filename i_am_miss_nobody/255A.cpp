#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,b=0,c=0,d=0;
    cin>>n;
    int a[30];
    for(int i=1;i<=n;i++)

    {
        cin>>a[i];
    }

    for(int i=1;i<=n;i++)
    {
        if((i%3)==1)
        {
            b+=a[i];
        }

        else if((i%3)==2)
        {
            c+=a[i];
        }

        else if((i%3)==0)
        {
            d+=a[i];
        }
    }
    if(b>c && b>d)
        cout<<"chest"<<endl;
    else if(c>b && c>d)
        cout<<"biceps"<<endl;
    else if(d>c && d>b)
        cout<<"back"<<endl;

}