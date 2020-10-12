#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int main()
{
    int a[3],i,x;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    x=a[1];
    x=abs(x-a[0])+abs(x-a[2]);
cout<<x;
    return 0;
}