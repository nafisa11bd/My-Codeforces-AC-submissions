#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int t,n,flag=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        cin>>a;

//cout<<a+"2"<<endl;
        for(int i=0; i<a.size(); i++)
        {
            if(flag==0)
            {
                if(a[i]=='2' && i==0)
                {
                    b=b+"1";
                    c=c+"1";
                }

                else if(a[i]=='2' && i!=0)
                {
                    b=b+"1";
                    c=c+"1";
                }
                else if(a[i]=='1')
                {
                    b=b+"1";
                    c=c+"0";
                    flag=1;
                }
                else if(a[i]=='0')
                {
                    b=b+"0";
                    c=c+"0";
                }
            }
            else if(flag==1)
            {
                if(a[i]=='0')
                {
                    b=b+"0";
                    c=c+"0";
                }
                else if(a[i]=='1')
                {
                    b=b+"0";
                    c=c+"1";
                }

                else if(a[i]=='2')
                {
                    b=b+"0";
                    c=c+"2";
                }


            }
        }
            cout<<b<<endl;
            cout<<c<<endl;
            flag=0;
            b.clear();
            c.clear();

    }
}