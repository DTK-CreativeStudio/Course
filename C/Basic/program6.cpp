#include<stdio.h>
int main(void){
  int i;
  double a[5];
  double sum_a=0,sum_b=0;
  a[0]=5.1;
  a[1]=1.3;  //a[1]に1.3を代入
  a[2]=2.7;
  a[3]=3.2;
  a[4]=4.6;
  for(i=0;i<5;i++){
    printf("%f\n",a[i]);
    sum_a += a[i];
  }
  printf("%f\n",sum_a);
  printf("\n");
  //--------------------------------------------------
  int b[] = {3,5,7,5,7};  //b[]の配列に5つ代入
  int j;
  for (j = 0;j<5;j++){
    printf("%d\n",b[j]);
  }
  return 0;
}
/*
課題work6
int a[] = {2,5,4,6,3,5,7,4,3,6};を使い、
2+5+4+6+3+5+7+4+3+6=45を表示するプログラムを作りましょう(ifとbreakも使う)
*/

