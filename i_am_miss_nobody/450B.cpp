#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
int main()
{
    long long int f1,f2,f3,f4,f5,f6,n,ans;
    cin>>f1>>f2;
    cin>>n;
    f3=(f2-f1)%mod;
    f4=(-f1)%mod;
    f5=(-f2)%mod;
    f6=(-f2+f1)%mod;
    ans=n%6;
    if(ans==1)
        cout<<(f1+mod)%mod<<endl;
    else if(ans==2)
        cout<<(f2+mod)%mod<<endl;
    else if(ans==3)
        cout<<(f3+mod)%mod<<endl;
    else if(ans==4)
        cout<<(f4+mod)%mod<<endl;
    else if(ans==5)
        cout<<(f5+mod)%mod<<endl;
    else
        cout<<(f6+mod)%mod<<endl;

    //cout<<(-1+mod)%mod<<endl;

}