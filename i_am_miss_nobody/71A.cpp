#include<bits/stdc++.h>
#include<string>
using namespace std;
char s[110],p,n;
main()
{
    scanf("%d\n",&n);
    for(; gets(s),n--;)
    if((p=strlen(s))>10)
    printf("%c%d%c\n",*s,p-2,s[p-1]);
        else puts(s);
    
}