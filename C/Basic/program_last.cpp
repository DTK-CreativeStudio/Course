#include<stdio.h>
struct data{        //structで初めて構造体の名前(なんでもok)を定義する。
  char name[20];
  int year;
  int month;
  int day;
};
int main(void){
  data a={"Horiuchi",2000,7,23};           //date型の構造体定義、定義と同時に初期化する。
  data b;                       
  b.year=2000; b.month=5; b.day=5; //定義と同時に初期化しなかった場合、b={"inaba",2000,5,5}はできない
  //b.name[0]='I',b.name[1]='n',b.name[2]='a',b.name[3]='b',b.name='a'のように初期化しないといけないので面倒
  data c[10];     //配列を用いて同時に20個のdataを定義可能
  printf("生年月日は%d年%d月%d日です。",a.year,a.month,a.day);
  return 0;
}

/*
課題work10
生徒名と三科目(国.数.英)の点数を管理する構造体変数を作り、さらに得点の平均点を算出する関数を作ろう。
生徒数は三人でデータはscanfで入力し、以下に示す表を作ろう。

実行結果の例(あくまで例なので全く同じ形にならなくてもok):
生徒名：Horiuchi
国語の点数：65
数学の点数：80
英語の点数：30
生徒名：Mikawa
国語の点数：75
数学の点数：65
英語の点数：80
生徒名：Inaba
国語の点数：80
数学の点数：75
英語の点数：90

名前         (国.数.英)   平均点
-----------------------------------------
Horiuchi    :65  80  30  :58.3
Mikawa      :75  65  80  :73.3
Inaba       :80  75  90  :81.7
*/