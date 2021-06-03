#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      int n;
      int inc=0;
      float p;
      cin>>n;
      int a[n+1];
      for(int j=0;j<n;j++)
      {
          cin>>a[j];

      }

      for(int j=0;j<n-1;j++)
      {
          p=(float)max(a[j],a[j+1])/(float)min(a[j],a[j+1]);
          int q=min(a[j],a[j+1]);
          int r=max(a[j],a[j+1]);
          //int inc=0;
          while(p>2.00)
          {
             q=q*2;
             p=(float)r/(float)q;
             inc++;
             //cout<<p<<endl;
             //cout<<inc<<endl;
          }
      }

      cout<<inc<<endl;

  }


}