#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        if(k*k<=n && n%2==k%2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}