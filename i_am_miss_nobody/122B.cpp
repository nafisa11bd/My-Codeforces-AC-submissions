#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int four=0,seven=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4')
        {
            four++;
        }
        else if(s[i]=='7')
        {
            seven++;
        }
    }

    if(four==0 && seven==0)
    {
        cout<<-1<<endl;
        return 0;
    }

    if(four>seven)
    {
        cout<<4<<endl;
    }
    else if(seven>four)
    {
        cout<<7<<endl;
    }
    else if(four==seven)
    {
        cout<<4<<endl;
    }


}