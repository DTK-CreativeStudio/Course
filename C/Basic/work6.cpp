/*
課題work6
int a[] = {2,5,4,6,3,5,7,4,3,6};を使い、
2+5+4+6+3+5+7+4+3+6=45を表示するプログラムを作りましょう(ifとbreakも使う)
*/
#include<stdio.h>
int main(void){
  int a[] = {2,5,4,6,3,5,7,4,3,6};
  int sum = 0;
  for (int i=0;i<10;i++){
    printf("%d",a[i]);
    sum = sum + i;
    if(i == 9)
      break;
    printf("+");
  }  
    printf("=%d",sum);
}