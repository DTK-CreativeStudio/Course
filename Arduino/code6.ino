/*------------------------------------------
7セグメントディスプレイに0と表示するプログラム
------------------------------------------*/

//セグメントの番号を宣言
int a = 0;
int b = 1;
int c = 2;
int d = 3;
int e = 4;
int f = 5;
int g = 6;
int h = 7;

void setup(){
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);
    pinMode(e,OUTPUT);
    pinMode(f,OUTPUT);
    pinMode(g,OUTPUT);
    pinMode(h,OUTPUT);
}

void loop(){

    //a~hの出力をまとめてHIGHの状態にする
    for(int i = 0 ; i <= 7 ; i++)
        digitalWrite(i,HIGH);

}


/*------------------------------------------------
第6回
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, ...
と一秒ごとに数字を表示するプログラムを作ってください。
-------------------------------------------------*/