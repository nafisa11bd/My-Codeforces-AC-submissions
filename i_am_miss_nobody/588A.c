
#include<stdio.h>


int main(){

  int n,a,p;
  int money = 0, price = 101;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d",&a,&p);
    if(price > p){ price = p; }
    money += price * a;
  }
  printf("%d",money);
 return 0;
}