#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  t,n,m,a,b,p;
    long long int  d;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        d=(n%m);
        p=abs(m-d);
        if(p==m)
            //cout<<0<<endl;
            printf("0\n");
        else

        //cout<<abs(m-d)<<endl;
        printf("%lld\n",p);
    }
}