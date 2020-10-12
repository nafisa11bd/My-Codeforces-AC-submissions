#include<bits/stdc++.h>
using namespace std;
int main()
{
 int nn,t,a[100000];
 long long m=0,n=0,a1=0,b1=0;
 cin>>t;
 for(int i=0;i<t;i++)
 {
     cin>>nn;
     for(int j=0;j<nn;j++)
     {
         cin>>a[j];
         m+=a[j];
         n^=a[j];

     }
     a1=m+n;
     cout<<"2"<<endl;
     cout<<a1<<" "<<n<<endl;
     m=0;
     n=0;


 }
}