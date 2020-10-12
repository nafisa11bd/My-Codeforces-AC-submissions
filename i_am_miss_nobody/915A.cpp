#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n_b,l_g,i,b1,b2=1;
    cin>>n_b>>l_g;
    for(i=0; i<n_b; i++)
    {
        cin>>b1;
        if(b1>b2  &&  l_g%b1==0)
            b2=b1;
    }
    cout<<l_g/b2<<endl;
}