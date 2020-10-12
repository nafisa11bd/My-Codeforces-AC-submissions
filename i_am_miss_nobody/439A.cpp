#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,time[101];
    int total=0,m;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>time[i];
        total+=time[i];
    }
    total+=(n-1)*10;
  // cout<<total<<endl;
   if(total>d)
   {
       cout<<-1<<endl;
       return 0;
   }
   else
   {
       m=d-total;
       m=m/5;
       //cout<<m<<endl;
       m+=((n-1)*10)/5;


   }
   cout<<m<<endl;

}