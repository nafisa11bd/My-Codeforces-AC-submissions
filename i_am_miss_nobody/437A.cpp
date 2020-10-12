#include<bits/stdc++.h>
using namespace std;
int main()


{
    char a[110],b[110],c[110],d[110];
    int f=0,s=0,t=0,frth=0;
    int ct=0,w=0,x=0,y=0,z=0;
    cin>>a;
    for(int i=2;a[i]!='\0';i++)
    {
        f++;
    }
    //cout<<f<<endl;

    cin>>b;
    for(int i=2;b[i]!='\0';i++)
    {
        s++;
    }
    //cout<<s<<endl;

     cin>>c;
    for(int i=2;c[i]!='\0';i++)
    {
        t++;
    }
    //cout<<t<<endl;

      cin>>d;
    for(int i=2;d[i]!='\0';i++)
    {
        frth++;
    }
    //cout<<frth<<endl;

    if((f*2<=s && f*2<=t && f*2<=frth)||(s*2<=f && t*2<=f && frth*2<=f))
    {
        ct++;
        w=1;
    }

    if((s*2<=f && s*2<=t && s*2<=frth)||(f*2<=s && t*2<=s && frth*2<=s))
    {
        ct++;
        x=1;
    }
    if((t*2<=f && t*2<=s && t*2<=frth)||(f*2<=t && s*2<=t && frth*2<=t))
    {
        ct++;
        y=1;
    }

    if((frth*2<=f && frth*2<=s && frth*2<=t)||(f*2<=frth && s*2<=frth && t*2<=frth))
    {
        ct++;
        z=1;
    }
    //cout<<ct<<endl;
    //cout<<w<<endl;
    //cout<<x<<' '<<y<<' '<<z<<endl;

    if(ct>1 || ct==0)
        cout<<"C"<<endl;
    else if(ct==1)
    {
        if(w==1)
            cout<<"A"<<endl;
        else if(x==1)
            cout<<"B"<<endl;
        else if(y==1)
            cout<<"C"<<endl;
        else if(z==1)
            cout<<"D"<<endl;
    }







}