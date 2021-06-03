#include<iostream>
using namespace std;
int main(){
    long long  int x,y;
long long  i,gcd;
long long int c1=1,c2=1;
cin>>x>>y;
for(i=x;i>=1;i--)
{
c1=c1*i;
}
for(i=y;i>=1;i--)
{
c2=c2*i;
}
for(i=1;i<=c1&&i<=c2;i++){
    if(c1%i==0 && c2%i==0)
    gcd=i;
}
cout<<gcd;

}