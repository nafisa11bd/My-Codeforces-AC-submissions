#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    cin>>a;
    map<char,int>m1;
    for(int i=0;i<26;i++)
    {
        m1[char('a'+i)]+=0;
    }
    for(char i:a)
    {
        m1[i]++;
    }

    int odd=0;
    for(auto i:m1)
    {
        if(i.second%2==1)
        {
            odd++;
        }
    }

    if(odd%2!=0 || odd==0)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }



}