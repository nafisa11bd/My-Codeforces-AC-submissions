#include<bits/stdc++.h>
using namespace std;
int main()
{
  int left[10000];
  int right[1000];
  int lz=0,lo=0,rz=0,ro=0,n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>left[i]>>right[i];
      if((left[i]==0)&&(right[i]==0))
        {
            lz++;
            rz++;
        }
        else if((left[i]==0)&&(right[i]==1))
        {
            lz++;
            ro++;
        }
          else if((left[i]==1)&&(right[i]==0))
        {
            lo++;
            rz++;
        }

        else if((left[i]==1)&&(right[i]==1))
        {
            lo++;
            ro++;
        }

  }

  cout<<min(lo,lz)+min(ro,rz)<<endl;
}