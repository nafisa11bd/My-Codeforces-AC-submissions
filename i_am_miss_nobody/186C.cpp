#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;

long long Bigmod(long long base,long long power)
{

    if(power==0)
        return 1;
    else if (power%2==1)
    {
        long long a=base%mod;
        long long b=(Bigmod(base,power-1))%mod;
        return (a*b)%mod;
    }
    else if (power%2==0)
    {
        long long a=(Bigmod(base,power/2))%mod;
        return (a*a)%mod;
    }
}
int main()
{
    unsigned long long int n,m;
    long long int b;

    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(n==1 || n==2)
    {
        n=n*2;
        m=(n*(n+1))/2;
        cout<<m%mod<<endl;


    }


    else
    {
        b=Bigmod(2,n);

        m=(b*(b+1))/2;
        cout<<m%mod<<endl;
    }

}