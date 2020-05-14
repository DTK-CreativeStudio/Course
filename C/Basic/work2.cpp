/*
課題work2
上辺、下底、高さを入力させる画面を作りましょう。
そして、台形の面積が10未満か、10以上20未満か、20以上かどうかを判定するプログラムを作ってみましょう。
*/
#include<stdio.h>
int main(void){
  double a,b,c,tra;
  printf("上辺を入力してください:");
  scanf("%lf",&a);
  printf("下辺を入力してください:");
  scanf("%lf",&b);
  printf("高さを入力してください:");
  scanf("%lf",&c);
  tra = (a+b)*c/2;
  if(tra<10){
    printf("台形＝%lfなので、10未満です",tra);
  }
  else if(tra<20){
    printf("台形＝%lfなので、10以上20未満です",tra);
  }
  else{
    printf("台形＝%lfなので、20以上です",tra);
  }
  return 0;
}