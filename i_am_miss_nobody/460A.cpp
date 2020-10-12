#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    while(n!=0){
        n--;
    ans++;
    if(ans%m==0)
        n++;
    }
    cout<<ans<<endl;



}