//これはprogram4の後編です。
#include<stdio.h>
int main(void){
  int i=0,j=0,a,sum = 0;
  while(i<10){  //
    i++;
    printf("i");
    //whileがいったん終わる
    if (i==10)  
      break;    //iが10の時には省かれる
    printf("+"); 
  }
  printf("\n");
  while(j<10){
    scanf("%d",&a);
    if(a<0||a>10)    //aが0未満またはaが10より大きいとき
         continue;    //ループの回数には影響せず、sum=sum+a;j++;を省く
      sum=sum+a;
      j++;
  }
  printf("sum = %d\n",sum);
  return 0;
}
/*
課題work4
整数を入力させる画面を作りましょう。
whileとbreakを使って「1+2+3+4+5+6…=合計」が表示されるプログラムを作りましょう。
(例)
1+2+3+4+5+6+7+8+9+10=55
*/