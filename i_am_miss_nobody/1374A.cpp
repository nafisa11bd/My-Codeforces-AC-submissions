#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int t;
cin>>t;
for(int i=0;i<t;i++)
{

    int x,y,n;
    cin>>x>>y>>n;
    int a,b;
    a=floor(n/x);

    b=a*x+y;
    if(b>n)
    {
        a=a-1;
        b=a*x+y;
    }
    if(b%x==y){

        cout<<b<<endl;
    }
    else
    {
        a--;
        b=a*x+y;

        cout<<b<<endl;
    }







}
}