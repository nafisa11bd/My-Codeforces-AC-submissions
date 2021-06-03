#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int mod=1000003;
    string great="1000";
    string lesss="1001";
    string pluss="1010";
    string minuss="1011";
    string dot="1100";
    string comma="1101";
    string fb="1110";
    string sb="1111";

    string a,b;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='>')
        {
           b+=great;
        }
        else if(a[i]=='<')
        {
            b+=lesss;
        }
        else if(a[i]=='+')
        {
            b+=pluss;
        }
        else if(a[i]=='-')
        {
            b+=minuss;
        }
        else if(a[i]=='.')
        {
            b+=dot;
        }
        else if(a[i]==',')
        {
            b+=comma;
        }
        else if(a[i]=='[')
        {
            b+=fb;
        }
        else if(a[i]==']')
        {
            b+=sb;
        }
    }

  long long int len=b.length();
 //cout<<len<<endl;
 // cout<<b<<endl;
  long long int pow[400];
  long long int sum=0;
  pow[0]=1;
  //cout<<b[0]<<endl;
  reverse(b.begin(),b.end());
  int m=b[0]-'0';

  sum+=m*pow[0];

  for(int i=1;i<=len-1;i++)
  {
      pow[i]=(pow[i-1]*2)%mod;

      sum+=((b[i]-'0')*pow[i])%mod;
      sum=sum%mod;


  }

  cout<<sum<<endl;


}