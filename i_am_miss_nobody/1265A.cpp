
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    char m[10000];
    cin>>n;
    for(int j=0; j<n; j++)
    {
        cin>>m;

        for(int i=0; i<strlen(m); i++)
        {

            if (m[i]=='a')
            {
                //cout<<2<<endl;
                if(m[i-1]=='a'||m[i+1]=='a')
                {

                    cout<<-1<<endl;
                    t++;
                    break;
                }


            }



            else if (m[i]=='b')
            {
                //cout<<2<<endl;
                if(m[i-1]=='b'|| m[i+1]=='b')
                {

                    cout<<-1<<endl;
                    t++;
                    break;
                }
            }

            else if (m[i]=='c')
            {
                if(m[i-1]=='c' || m[i+1]=='c')
                {
                    cout<<-1<<endl;
                    t++;
                    break;
                }
            }

            else if (m[i]=='?')
            {
               if((m[i-1]=='a' && m[i+1]=='b')||(m[i-1]=='b' && m[i+1]=='a') || (m[i-1]=='b' && m[i+1]=='b'))
               {
                   m[i]='c';
               }

               else if((m[i-1]=='b' && m[i+1]=='c')||(m[i-1]=='c' && m[i+1]=='b')||(m[i-1]=='c' && m[i+1]=='c'))
               {
                   m[i]='a';
               }
               else if ((m[i-1]=='c' && m[i+1]=='a')||(m[i-1]=='a' && m[i+1]=='c')||(m[i-1]=='a' && m[i+1]=='a'))
               {
                   m[i]='b';
               }
               else if ((m[i-1]=='a'||m[i-1]=='b')&&(m[i+1]=='?'))
               {
                   m[i]='c';
               }
                else if ((m[i-1]=='c')&&(m[i+1]=='?'))
               {
                   m[i]='b';
               }

               else if (i==0 && (m[i+1]=='a' || m[i+1]=='c'))
               {
                   m[i]='b';
               }

                else if (i==0 && (m[i+1]=='b'))
               {
                   m[i]='c';
               }
               else if(i==(strlen(m)-1) && (m[1]=='a'|| m[1]=='b') )
               {
                   m[0]='c';
               }
                else if(i==(strlen(m)-1) && (m[1]=='c') )
               {
                   m[0]='a';
               }



            }

        }
        if(t==0)
            cout<<m<<endl;

            t=0;


    }
    }