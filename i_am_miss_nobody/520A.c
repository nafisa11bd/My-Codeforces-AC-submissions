#include<stdio.h>
#include<string.h>
int main(){
int N,I;
char S[1000];
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

scanf("%d %s",&N,S);

for(I=0;I<N;I++)
{
if(S[I]=='a'||S[I]=='A')
a++;
else if(S[I]=='b'||S[I]=='B')
b++;
else if(S[I]=='c'||S[I]=='C')
c++;
else if(S[I]=='d'||S[I]=='D')
d++;
else if(S[I]=='e'||S[I]=='E')
e++;
else if(S[I]=='f'||S[I]=='F')
f++;
else if(S[I]=='g'||S[I]=='G')
g++;
else if(S[I]=='h'||S[I]=='H')
h++;
else if(S[I]=='i'||S[I]=='I')
i++;
else if(S[I]=='j'||S[I]=='J')
j++;
else if(S[I]=='k'||S[I]=='K')
k++;
else if(S[I]=='l'||S[I]=='L')
l++;
else if(S[I]=='m'||S[I]=='M')
m++;
else if(S[I]=='n'||S[I]=='N')
n++;
else if(S[I]=='o'||S[I]=='O')
o++;
else if(S[I]=='p'||S[I]=='P')
p++;
else if(S[I]=='q'||S[I]=='Q')
q++;
else if(S[I]=='r'||S[I]=='R')
r++;
else if(S[I]=='s'||S[I]=='S')
s++;
else if(S[I]=='t'||S[I]=='T')
t++;
else if(S[I]=='u'||S[I]=='U')
u++;
else if(S[I]=='v'||S[I]=='V')
v++;
else if(S[I]=='w'||S[I]=='W')
w++;
else if(S[I]=='x'||S[I]=='X')
x++;
else if(S[I]=='y'||S[I]=='Y')
y++;
else if(S[I]=='z'||S[I]=='Z')
z++;
}
if(a>=1 && b>=1&& c>=1 && d>=1&& e>=1 && f>=1 && g>=1 &&h>=1 && i>=1 && j>=1&& k>=1 && l>=1&& m>=1 &&n>=1&& o>=1&& p>=1 &&q>=1&&r>=1&&s>=1&&t>=1&&u>=1&&v>=1&&w>=1&& x>=1&& y>=1&&z>=1)
printf("YES");
else
printf("NO");
}