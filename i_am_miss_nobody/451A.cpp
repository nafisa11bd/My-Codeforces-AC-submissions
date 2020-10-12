#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m,mul=0,winner=1;
 cin>>n>>m;
 mul=n*m;
 while(mul!=0)
 {
     winner+=1;
  n-=1;
  m-=1;
  mul=m*n;
 }
   if(winner%2==0)
    cout<<"Akshat"<<endl;
   else
    cout<<"Malvika"<<endl;

}