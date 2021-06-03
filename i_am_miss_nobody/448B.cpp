#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    map<char,int>m1,m2;
    cin>>a>>b;

    for(char i:a)
    {
        m1[i]++;
    }

    for(char i:b)
    {
        m2[i]++;
    }
    for(int i=0; i<26; i++)
    {
        m1[char('a'+i)]+=0;
    }

    bool flag=true;
    for(auto i:m1)
    {
        if(i.second<m2[i.first])
        {
            cout<<"need tree"<<endl;
            return 0;
        }

        else if(i.second>m2[i.first])
        {
            flag=false;

        }
    }

    int pos=0;
    bool flag2=true;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==b[pos])
        {
            pos++;
        }
        if(pos==b.length())
        {
            break;
        }
    }

    if(pos!=b.length())
    {
        flag2=false;
    }

    if(flag2==false && flag==false)
    {
        cout<<"both"<<endl;
    }
    else if (flag2==false)
    {
        cout<<"array"<<endl;
    }
    else
    {
        cout<<"automaton"<<endl;
    }




}