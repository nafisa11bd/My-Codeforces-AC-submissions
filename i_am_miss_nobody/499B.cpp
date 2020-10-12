#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    map<string,string>s;

    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        if(a.length()>b.length())
        {
            s[a]=b;
        }
        else
        {
            s[a]=a;
        }


    }

    for(int i=0;i<n;i++)
    {
        string p;
        cin>>p;
        cout<<s[p]<<' ';
    }
    cout<<endl;





}