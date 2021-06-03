#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char m[55];
        cin>>m;
        int p=strlen(m);
        char low='a';
        char high='z';
        for(int i=0; i<p; i++)
        {
            if (i%2==0)
            {
                if(m[i]=='a')
                {
                    //low++;
                    m[i]='b';
                }
                else
                {
                    m[i]=low;
                }
            }
            else if(i%2!=0)
            {
                if(m[i]=='z')
                {
                   // high--;
                    m[i]='y';
                }
                else
                {
                    m[i]='z';
                }
            }
            //else if(i%2!=0)


        }

        for(int i=0;i<p;i++)
        {
            cout<<m[i];
        }
        cout<<endl;

    }
}