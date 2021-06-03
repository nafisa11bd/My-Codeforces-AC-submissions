#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100];

    int i,l=0,u=0;
    gets(a);
    for(i=0; i<strlen(a); i++)
    {
        if (a[i]>='a' && a[i]<='z')
            l++;
        else if (a[i]>='A' && a[i]<='Z')
            u++;
    }
    if (l>u){
        printf("%s",strlwr(a));
        }
    else if (l<u){
        printf("%s",strupr(a));

    }
    else
        printf("%s",strlwr(a));
}