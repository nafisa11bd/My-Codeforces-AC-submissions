#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int y,k,n,p,q=0;
    cin>>y>>k>>n;
    //p=(n-y);

    if(n==y || y>n)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=1;k*i<=n;i++)
    {
       p=i*k;
       if(p<=y)
        continue;
       else
        cout<<p-y<<' ';

//        if((y+i)/n>100000)
//            break;
//        if((y+i)>n)
//            break;
q++;
    }
    cout<<endl;

if(q==0)
    cout<<-1<<endl;

}