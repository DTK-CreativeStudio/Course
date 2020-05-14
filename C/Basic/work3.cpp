/*
課題work3
整数値を自分で入力し、0が入力されると終了するプログラムをfor文で作ってみましょう。
*/
#include<stdio.h>
int main(void){
  int a,i=0;
  printf("整数値を入力：");
  scanf("%d",&a);
  for(i=0;a!=0;){
      printf("整数値を入力：");
      scanf("%d",&a);
  }
  return 0;
}
//while文でも作れるので余力のある人は作ってみましょう。