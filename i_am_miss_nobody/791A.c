#include<stdio.h>
int main(){
int b,l,count=0;
scanf("%d %d",&b,&l);
while(b<=l)
{
b=b*3;
l=l*2;
count++;

}
printf("%d",count);
return 0;
}