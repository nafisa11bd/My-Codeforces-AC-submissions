#include<bits/stdc++.h>
using namespace std;
int main()
{

    int h,m;
    char x;
    cin>>h>>x>>m;

   while(1)
   {
       m++;

       if(m==60)
       {
           m=0;
           h=(h+1)%24;
       }

       if(h%10==m/10 && h/10==m%10)
       {
           printf("%02d:%02d\n",h,m);
           return 0;
       }




   }

}