#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r,t1,t2,t3;
    cin>>y>>b>>r;
    if(y<b&&y<r)
    {

        t1=y;
        t2=y+1;
        t3=y+2;
        while(t2>b)
            t2--;
        while(t3>r)
            t3--;
       if((t2=t1+1)&&(t3==t1+2))


 cout<<t1+t2+t3;
 else
    cout<<t1-1+t2-1+t3;
    }

    //cout<<y+y+1+y+2;
    else if(b<y&&b<r)
        cout<<b-1+b+b+1;
    else if(r<y&&r<b)
        cout<<r-2+r-1+r;




}