#include<bits/stdc++.h>
using  namespace std;
int main()
{
  double r,x,y,x1,y1;
  int a;
  cin>>r>>x>>y>>x1>>y1;
  a=ceil(sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)) /(2*r));
  cout<<a<<endl;
}