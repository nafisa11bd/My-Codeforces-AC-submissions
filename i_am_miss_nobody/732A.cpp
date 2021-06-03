#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,n,k,count=0;
scanf("%d %d",&n,&k);
for(i=1;i<=100;i++)
{
if(((n*i)%10)==0||((n*i)%10)==k)




{
    printf("%d\t",i);
    break;}
    else
        continue;



}

}