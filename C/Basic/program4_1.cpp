//これはprogram4の前編です
#include<stdio.h>
int main(void){
  int a = 0;
  while (a<10){    //a<10が永遠に成り立つので永遠にループする
    printf("無限");  //Ctrl+Cを押して無限ループを止める
  }
  return 0;
}
