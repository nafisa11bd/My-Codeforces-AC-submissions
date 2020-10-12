#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    int i,y,h=0,e=0,l=0,o=0;

    gets(s);
    y= strlen(s);
    for(i=0;i<y;i++)
    {
            if(s[i]=='h')
            {
                h++;
            }
            if(s[i]=='e' && h>=1 && l==0 && o==0)
            {
                e++;
            }
            if(s[i]=='l' && h>=1 && e>=1 && o==0)
            {
                l++;
            }
            if(s[i]=='o' && h>=1 && e>=1 && l>=2)
            {
                o++;
            }
    }
    if(h>=1 && e>=1 && l>=2 && o>=1)
    {
        cout<<"YES"<<endl;
    }
    else
         cout<<"NO"<<endl;

    return 0;

}