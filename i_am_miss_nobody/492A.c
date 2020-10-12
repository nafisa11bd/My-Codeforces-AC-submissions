#include<stdio.h>
int main ()
{
    int i=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        n-=i*(i+1)/2;

        if (n>=0)i++;
    }
    printf("%d",i-1);
}