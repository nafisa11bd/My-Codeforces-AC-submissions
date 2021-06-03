#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int i,m,c=0,c1=0;
    scanf("%d",&m);
    char a[m];


scanf("%s",a);
for(i=0;i<m;i++)
{
if(a[i]=='A')
c++;
else if (a[i]=='D')
c1++;
}
if(c>c1)
printf("Anton\n");
else if(c<c1)
printf("Danik\n");
else if(c==c1)

printf("Friendship\n");




}