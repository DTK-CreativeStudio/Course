/*
課題work4
整数を入力させる画面を作りましょう。
whileとbreakを使って「1+2+3+4+5+6…=合計」が表示されるプログラムを作りましょう。
(例)
1+2+3+4+5+6+7+8+9+10=55
*/
#include<stdio.h>
int main(void){
  int a,i=1,sum = 0;
  printf("整数を入力してください:");
  scanf("%d",&a);
  while(i<=a){
    printf("%d",i);
    i++;
    sum = sum + i;
    if(i == a+1)
      break;
    printf("+");
  }
  printf("=%d",sum);
  return 0;
}

