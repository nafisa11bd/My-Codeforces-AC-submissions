#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    while(a>=n-b)
    b--;
    cout<<b+1;
}