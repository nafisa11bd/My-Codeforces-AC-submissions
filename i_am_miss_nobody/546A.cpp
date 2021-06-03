#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int k,w,m,i,l;
long int n;
cin>>k>>n>>w;
m=k*(w*(w+1))/2;
if(m>n)
cout<<abs(m-n);
else
cout<<"0";



}