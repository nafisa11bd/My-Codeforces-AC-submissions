#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    long long int n,m=0,p;
    cin>>s;
    n=s.length();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='^')
        {
           p=i;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]!='^' && s[i]!='=')
        {
            m+=(s[i]-'0')*(p-i);
        }
    }

    if(m>0)
        cout<<"left"<<endl;
    else if(m<0)
        cout<<"right"<<endl;
    else if(m==0)
        cout<<"balance"<<endl;


}