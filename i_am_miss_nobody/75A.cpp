#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d,e,f,g;
    int n,m;
    cin>>a>>b;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]!='0')
            c+=a[i];

    }

   // cout<<c<<endl;

    for(int i=0; i<b.length(); i++)
    {
        if(b[i]!='0')
            d+=b[i];

    }
   // cout<<d<<endl;

    n=stoi(a)+stoi(b);

    //cout<<n<<endl;
    e=to_string(n);

    //cout<<e<<endl;
    for(int i=0; i<e.length(); i++)
    {
        if(e[i]!='0')
            f+=e[i];

    }
//cout<<f<<endl;

    m=stoi(c)+stoi(d);
    g=to_string(m);
    //cout<<g<<endl;
    if(f==g)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}