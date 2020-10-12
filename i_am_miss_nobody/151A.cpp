#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int k,l,n,c,d,p,nl,np,w,x,y,ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    w=((k*l)/nl);
    x=c*d;
    y=(p/np);
    cout<<(std::min({w,x,y},comp))/n;
    //cout<<ans<<endl;




}