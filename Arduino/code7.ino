/*-------------------------------------------------
左ボタンを押してサーボモータを0~180度、
右ボタンを押して180~0度に回転させるプログラム
--------------------------------------------------*/

#include<Servo.h> //サーボモータ用ライブラリ

#define PIN 10  //サーボモータ用ピン
#define LEFT 0 //LEFT 左
#define RIGHT 1 //RIGHT 右

Servo servo; //サーボモータの宣言
int a = 90; //角度変数の宣言

void setup() {

  pinMode(LEFT, INPUT); //10番ピン出力を宣言
  pinMode(RIGHT, INPUT); //10番ピン出力を宣言
  servo.attach(PIN); //サーボモータを9番ピンに接続
  servo.write(a); //サーボモータを90度のところに設定
  
}

void loop() {

  //左ボタンを押したら0から180度まで角度変化
  while ((digitalRead(LEFT)) == LOW) {
    if (a == 180) {//180度まで来たらストップ
     break;
    }
    else {
      a++;
      servo.write(a);
      delay(5);
    }
  }



  //右ボタンを押したら0から180度まで角度変化
  while ((digitalRead(RIGHT)) == LOW) {
    if (a == 0){//0度まで来たらストップ
     break;
    }
    else {
      a--;
      servo.write(a);
      delay(5);
    }
  }
}
