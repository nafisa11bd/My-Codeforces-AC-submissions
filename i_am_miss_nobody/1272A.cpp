#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,abc[3],a,b,c;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        for(int j=0;j<3;j++)
            cin>>abc[j];
        sort(abc, abc+3);

        a=abc[0];
        b=abc[1];
        c=abc[2];
        if((a-b)!=0)
        {
            a=a+1;
            if((a-b)!=0)
                b=b-1;
        }

        if((b-c)!=0)
            c=c-1;
        cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl;

    }
}