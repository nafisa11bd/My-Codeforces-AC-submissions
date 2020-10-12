#include<bits/stdc++.h>
using namespace std;
int main()

{

   int n;
   cin>>n;

   char p[5][5];
   int cnt[11]={0};

   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           cin>>p[i][j];
           if(p[i][j]=='.')
            continue;
           else
            cnt[p[i][j]-'0']++;
       }
   }

   for(int i=1;i<=9;i++)
   {
       if(cnt[i]>2*n)
       {
          cout<<"NO"<<endl;
          return 0;
       }
   }

   cout<<"YES"<<endl;
}