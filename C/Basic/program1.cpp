#include<stdio.h>
int main(void){
  int a=5,b=3;
  printf("a+b=%d\n",a+b);//aとbの足し算
  printf("a-b=%d\n",a-b);//aとbの引き算
  printf("a×b=%d\n",a*b);//aとbの掛け算
  printf("a÷b=%d\n",a/b);//aとbの割り算
  printf("a÷bの余りは%d\n",a%b);//aとbの割り算の余り
  return 0;
}
/*
課題work1
program1では変数をint型で定義しましが、work1ではdouble型にしてみましょう。
なお、計算は足し算、引き算、掛け算、割り算までで大丈夫です。余りの計算はdouble型ではエラーが出てしまいます。
数値はa=5,b=3です。
ヒント：printf内の変換文字をintでは%dとしましたが、doubleでは%fにしてみましょう。
*/