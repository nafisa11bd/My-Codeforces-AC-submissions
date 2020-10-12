#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;

    long long int minn,maxx,sz,rem;

    maxx=((n-m+1)*(n-m))/2;

    sz=n/m;
    rem=n%m;
    minn=rem*((sz+1)*(sz))/2 +(m-rem)*((sz)*(sz-1))/2;

    cout<<minn<<' '<<maxx<<endl;




}