#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b[300];
    int a;
    cin>>b;

    for(int i=0; b[i]!='\0'; i++)
    {
        if(b[i]=='-' && b[i+1]=='.')
        {
            cout<<1;
            i++;
        }

        else if(b[i]=='-' && b[i+1]=='-')
        {
            cout<<2;
            i++;
        }
        else if(b[i]=='.')
        {
            cout<<0;
        }
    }
    cout<<endl;
}