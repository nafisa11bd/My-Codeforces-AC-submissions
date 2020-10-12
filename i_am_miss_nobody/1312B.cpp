#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,a[100];
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>n;
      for(int j=0;j<n;j++)
      {
          cin>>a[j];
      }
      //sort(a,a+n,greater<>());
      sort(a, a+n, greater<int>());
       for(int j=0;j<n;j++)
      {
          printf("%d ",a[j]);
      }
      cout<<endl;
  }



}