/*
課題work10
生徒名と三科目(国.数.英)の点数を管理する構造体変数を作り、さらに得点の入力、平均点を算出する関数を作ろう。
生徒数は三人でデータはscanfで入力し、以下に示す表を作ろう。
*/
#include<stdio.h>
struct data{                //structで生徒名と三科目のデータの構造体変数
  char name[10];
  int kokugo;
  int suugaku;
  int eigo;
};
data inputdate(void){       //得点の入力をする関数　引数としてvoidを使うと引数がないことを宣言
  data a;
  printf("生徒名：");
  scanf("%s",a.name);
  printf("国語の点数：");
  scanf("%d",&a.kokugo);
  printf("数学の点数：");
  scanf("%d",&a.suugaku);
  printf("英語の点数：");
  scanf("%d",&a.eigo);
  return a;
};
float average(data b){      //平均値を求めるための関数
  double sum=0;
  sum=sum+b.kokugo+b.suugaku+b.eigo;
  sum=sum/3;
  return sum;
};
int main(void){
  data a[3];
  double heikin;
  int i;
  for(i=0;i<3;i++){
    a[i]=inputdate();        
  }
  printf("\n");
  printf("名前       (国.数.英)     平均点\n");
  printf("---------------------------------------\n");
  for(i=0;i<3;i++){
    printf("%-10s：",a[i].name);
    printf("%-3d ",a[i].kokugo);
    printf("%-3d ",a[i].suugaku);
    printf("%-3d：",a[i].eigo);
    heikin=average(a[i]);
    printf("%-3.1f\n",heikin);
  }
  return 0;
}
