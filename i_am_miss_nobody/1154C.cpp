#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,e,f,j;
    cin>>a>>b>>c;
    int mw1,mw2;
    mw1=min(a/3,b/2);
    mw2=min(mw1,c/2);
   // cout<<mw2<<endl;

    a=a-mw2*3;
    b-=mw2*2;
    c-=mw2*2;


    int maxday=0;
    for(int i=0; i<7; i++)
    {
        d=a,e=b,f=c;
        j=i;
        int day=0;
        while(d>=0 && e>=0 && f>=0)
        {
            if(j%7==0 || j%7==1 || j%7==4)
            {
                d--;
            }

            else if(j%7==6 || j%7==2)
            {
                e--;
            }

            else
            {
                f--;
            }
            j++;
            day++;
        }
        if(day>maxday)
        {
            maxday=day;
        }


    }

    cout<<maxday-1+mw2*7<<endl;


}