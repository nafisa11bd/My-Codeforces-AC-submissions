#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,p,q;
    cin>>a>>b>>c>>d;
    p=max(((3*a)/10),a-(a/250)*c);
    q=max(((3*b)/10),b-(b/250)*d);

    if(p>q)
        cout<<"Misha"<<endl;
    else if(q>p)
        cout<<"Vasya"<<endl;
    else
        cout<<"Tie"<<endl;
}