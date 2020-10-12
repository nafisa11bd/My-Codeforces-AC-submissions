#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    char a[1000];
    int i,k=0;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='W')
        {
            if(s[i+1]=='U')
            {
                if(s[i+2]=='B')
                {
                    i+=2;
                    a[k]=' ';
                    a[k+1]=s[i];
                    k++;


                }
                else
                {
                    a[k]=s[i];
                    k++;
                }

            }
            else
            {
                a[k]=s[i];
                k++;

            }
        }
        else
        {
            a[k]=s[i];
            k++;

        }
    }
    for(i=0; i<k; i++)
        cout<<a[i];





}