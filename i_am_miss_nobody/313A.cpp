#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,p,q,r;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else if(n<0)
    {
        n=n*(-1);
        p=n/10;
        p=p*(-1);
        //cout<<p<<endl;
        r=n%10;
        //q=n/10;
        q=(n/100)*10+r;
        q=q*(-1);
        //cout<<q<<endl;
        cout<<max(p,q)<<endl;
    }


}