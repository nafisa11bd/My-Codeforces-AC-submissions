#include<iostream>


using namespace std;

int main()
{
    int a, b, c, d, e, sum=0;
    cin>>a>>b>>c>>d>>e;
    sum = (a+b+c+d+e);
    if(sum==0)
      cout<<"-1";
    else if(sum%5==0)
        cout<<sum/5;
    else
        cout<<"-1";
}