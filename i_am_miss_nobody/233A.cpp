#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            cout<<i-1<<' ';
        else if(i%2!=0)
            cout<<i+1<<' ';
    }
    cout<<endl;



}