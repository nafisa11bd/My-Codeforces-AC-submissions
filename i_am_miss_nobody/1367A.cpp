#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a,b;
            cin>>a;
            b+=a[0];
            for(int j=1;j<a.size();j+=2)
            {
                b+=a[j];
            }
            cout<<b<<endl;



    }
}