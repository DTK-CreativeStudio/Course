/*//////////////////////////////////////////////////////////////////
 サーボモータを0~180度、180~0度に回転させ
 0度のとき、7セグメントディスプレイに1と表示し、led1を点灯する
 90度のとき,7セグメントディスプレイに2と表示し、、led2を点灯する
 180度のとき,7セグメントディスプレイに3と表示し、led3を点灯するプログラム
///////////////////////////////////////////////////////////////////*/

#include<Servo.h> //サーボモータ用ライブラリ

Servo servo; //サーボモータの宣言
int ang = 0; //角度変数の宣言 ang=angle
int PIN = 10; //
int led1 = 11;
int led2 = 12;
int led3 = 13;
int a = 0;
int b = 1;
int c = 2;
int d = 3;
int e = 4;
int f = 5;
int g = 6;
int h = 7;

void setup(){

    servo.attach(PIN); //サーボモータを10番ピンに接続
    pinMode(led1,OUTPUT); //LED1を2番ピンに接続
    pinMode(led2,OUTPUT); //LED2を4番ピンに接続
    pinMode(led3,OUTPUT); //LED3を7番ピンに接続
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);
    pinMode(e,OUTPUT);
    pinMode(f,OUTPUT);
    pinMode(g,OUTPUT);
    pinMode(f,OUTPUT);
    
}

void loop(){

    //0から180度まで角度変化
    for(ang = 0 ; ang <= 180 ; ang++){
        servo.write(ang);
        
        if (ang == 0){//0°の時実行
          digitalWrite(led1,HIGH);//0°の時LED1を点灯する
          
          digitalWrite(a,LOW);//7セグメントディスプレイを全てオフ
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(b,HIGH);//7セグメントディスプレイに1を表示
          digitalWrite(c,HIGH);
          
        }
        else if (ang == 90){      //90°の時実行
          digitalWrite(led2,HIGH);//90°の時LED2を点灯する
          
          digitalWrite(a,LOW);//7セグメントディスプレイを全てオフ
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(a,HIGH);//7セグメントディスプレイに2を表示
          digitalWrite(b,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(e,HIGH);
          digitalWrite(g,HIGH);
        }
        else if (ang == 180){//180°の時実行
          digitalWrite(led3,HIGH);//180°の時LED3を点灯する
          
          digitalWrite(a,LOW);//7セグメントディスプレイを全てオフ
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(a,HIGH);//7セグメントディスプレイに3を表示
          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(g,HIGH);
        }
        delay(15);//15ミリ秒停止
    }
    delay(1000);//１秒停止
    digitalWrite(led1,LOW);//led1を消灯
    digitalWrite(led2,LOW);//led2を消灯
    digitalWrite(led3,LOW);//led3を消灯
    delay(1000);//１秒停止
    
    //180から0度まで角度変化
    for(ang = 180 ; ang >= 0 ; ang--){
        servo.write(ang);
        
        if (ang == 0){//0°の時実行
          digitalWrite(led3,HIGH);//0°の時LED3を点灯する
          
          digitalWrite(a,LOW);//7セグメントディスプレイを全てオフ
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(a,HIGH);//7セグメントディスプレイに3を表示
          digitalWrite(b,HIGH);
          digitalWrite(c,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(g,HIGH);
        }
        else if (ang == 90){//90°の時実行
          digitalWrite(led2,HIGH);//90°の時LED2を点灯する

          digitalWrite(a,LOW);//7セグメントディスプレイを全てオフ
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(a,HIGH);//7セグメントディスプレイに2を表示
          digitalWrite(b,HIGH);
          digitalWrite(d,HIGH);
          digitalWrite(e,HIGH);
          digitalWrite(g,HIGH);
        }
        else if (ang == 180){//180°の時実行
          digitalWrite(led1,HIGH);//180°の時LED1を点灯する

          digitalWrite(a,LOW);//7セグメントディスプレイを全てオフ
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(b,HIGH);//7セグメントディスプレイに1を表示
          digitalWrite(c,HIGH);
        }
        delay(15);//15ミリ秒停止
    }
    delay(1000);//１秒停止
    digitalWrite(led1,LOW);//led1を消灯
    digitalWrite(led2,LOW);//led2を消灯
    digitalWrite(led3,LOW);//led3を消灯
    delay(1000);//１秒停止
}
