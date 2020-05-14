#include <stdio.h>
float sikakusui(float a,float b,float h){  //a,b,hはローカル関数
    return((a*b*h)/3);         //sikakusui関数      
}
int main(void){
    float x,y,z;
    printf("底辺1を入力してください：");
    scanf("%f",&x);
    printf("底辺2を入力してください：");
    scanf("%f",&y);
    printf("高さを入力してください：");
    scanf("%f",&z);
    printf("四角錐の体積は%fです。",sikakusui(x,y,z));
    return 0;
}
/*
課題work8
上記のような方法で三角錐を求めましょう
*/