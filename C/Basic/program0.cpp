#include<stdio.h>
int main(void){
  printf("Hello World ");  //printfは中身を表示させる
  printf("Hello\nWorld\n");  // \nは改行することができる
  printf("5\n");
  int a = 10;       //int型は整数値を扱える
  float b = 2.8;     //float型は小数点も扱える
  int c;
  printf("%d\n",a);  //int型の時、%d
  printf("%f\n",b);  //float型の時、%f
  scanf("%d",&c);    //scanfはキーボードから数字を入力できる
  return 0;
}
/*
課題work0
自分の好きな四字熟語と数字をダーミナルに表示しましょう。
scanfを使ってキーボードから数字を入力出来るようにしましょう。
*/

