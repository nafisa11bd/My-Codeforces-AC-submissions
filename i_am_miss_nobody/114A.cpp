#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k,l,p,m=0;
    cin>>k>>l;


    p=(int)sqrt(l);
    //cout<<p<<endl;

    for(int i=1; i<=p; i++)
    {
        //cout<<pow(k,i)<<endl;
        m=round(pow(k,i));
        //cout<<m<<endl;
       if(m==l)
        {
            cout<<"YES"<<endl;
            cout<<i-1<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
}