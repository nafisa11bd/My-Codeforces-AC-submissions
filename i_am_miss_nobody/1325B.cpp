#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[100000],b;
    set<int>m;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>a[j];
            m.insert(a[j]);
        }
        cout<<m.size()<<endl;
        m.clear();
    }



}