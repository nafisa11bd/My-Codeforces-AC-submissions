#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    char a[100];
    gets(a);
    if(strlen(a)!=1)
    {
        for(i=1; i<strlen(a)-1; i++)
            for(j=0; j<strlen(a)-2; j++)
            {
                if (a[j]>a[j+2])
                {
                    temp=a[j+2];
                    a[j+2]=a[j];
                    a[j]=temp;
                }
            }
        puts(a);
    }

else
    puts(a);
}