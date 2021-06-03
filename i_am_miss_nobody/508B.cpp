#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;

cin>>s;
int n;
n=s.length();

bool flag=false;
for(int i=0;i<s.length();i++)
{
    if((s[i]-'0')%2==0)
    {
        flag=true;
    }
}

if(flag)
{
    for(int i=0;i<s.length()-1;i++)
    {
        if((s[i]-'0')%2==0 && (s[i]-'0')<s[n-1]-'0')
        {
            swap(s[i],s[n-1]);

            break;
        }
    }

    if((s[n-1]-'0')%2!=0)
    {
       // cout<<"p"<<endl;
        for(int i=n-2;i>-1;i--)
        {
            if((s[i]-'0')%2==0)
            {
                swap(s[i],s[n-1]);
                break;
            }
        }
    }

    cout<<s<<endl;
    return 0;



}

cout<<-1<<endl;



}