#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int a[3];
    for(i=0;i<4;i++)
        cin>>a[i];
   //cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    if ((a[0]+a[1]>a[2])||(a[1]+a[2]>a[3]))
    cout<<"TRIANGLE"<<endl;
    else if((a[0]+a[1]==a[2])||(a[1]+a[2]==a[3]))
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;



}