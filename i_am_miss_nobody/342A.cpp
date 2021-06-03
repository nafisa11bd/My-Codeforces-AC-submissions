#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int a[n+1];
    int on=0,tw=0,fo=0,six=0,th=0,other=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            on++;
        else if(a[i]==2)
            tw++;
        else if(a[i]==4)
            fo++;
        else if(a[i]==6)
            six++;
        else if(a[i]==3)
            th++;
        else
            other++;

    }

   vector<pair<int,int>>twofour;
   vector<pair<int,int>>twosix;
   vector<pair<int,int>>threesix;

   while(fo>0)
   {
      twofour.push_back(make_pair(2,4));
      on--;
      tw--;
      fo--;

   }


   while(th>0)
   {
       threesix.push_back(make_pair(3,6));
       on--;
       th--;
       six--;
   }

   while(six>0)
   {
       twosix.push_back(make_pair(2,6));
       on--;
       tw--;
       six--;
   }

    if(other>0)
   {
       cout<<-1<<endl;
       return 0;
   }

   if(on==0 && tw==0 && fo==0 && six==0)
   {
      for(int i=0;i<twofour.size();i++)
      {
          cout<<"1 2 4"<<endl;
      }
       for(int i=0;i<twosix.size();i++)
      {
          cout<<"1 2 6"<<endl;
      }
        for(int i=0;i<threesix.size();i++)
      {
          cout<<"1 3 6"<<endl;
      }


   }


   else
   {
       cout<<-1<<endl;
   }



}