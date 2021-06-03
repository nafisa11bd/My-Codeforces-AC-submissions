#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n,up=0,dov=0,r;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>r;
           if(r==1)
           {
               up++;
           }
           else if(r==2)
           {
               dov++;
           }
           else if(r==3)
           {
               up++;
           }
       }

       cout<<up<<endl;
   }

}