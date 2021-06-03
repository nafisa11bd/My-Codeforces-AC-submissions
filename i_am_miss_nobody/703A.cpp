#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n,a[100],b[100],i,c1=0,c2=0;
scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d %d",&a[i],&b[i]);



    for(i=0; i<n; i++)
    {
        if (a[i]>b[i])
            c1++;
        else if(a[i]<b[i])
            c2++;
    }
    if (c1>c2)
        printf("Mishka");

    else if (c1<c2)
        printf("Chris");
    else
        printf("Friendship is magic!^^");






}