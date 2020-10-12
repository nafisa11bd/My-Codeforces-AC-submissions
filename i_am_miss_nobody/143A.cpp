#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    int a=0,b=0,c=0,x;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;



    for(int i=1; i<=9; i++)
    {
        x=i;
        a=r1-x;
        b=c1-x;
        c=d1-x;

        //cout<<x<<' '<<a<<' '<<b<<' '<<c<<endl;
        if((a>0 && a<=9)&&(b>0 && b<=9)&&(c>0 && c<=9)&&(b+c==r2)&&(a+c==c2)&&(a+b==d2) && (x!=a && a!=b && b!=c && x!=c && x!=b && a!=c))


        {
            cout<<x<<' '<<a<<endl;
            cout<<b<<' '<<c<<endl;
            return 0;

        }

    }

    cout<<-1<<endl;
}