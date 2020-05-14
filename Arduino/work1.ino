/*--------------------------------------------------------------------
第1回
LEDの点滅をするプログラムを作ってください。
LEDの数は2つで、1秒点灯した後、1秒消灯し、続いて点滅を2回0.5秒おきに行い、
1秒後に再び点灯するものとします。
0.5秒の点灯●、消灯×とすると、●●××●×●×●●××●...という感じです。
---------------------------------------------------------------------*/

#define PIN1 10
#define PIN2 11

void setup(){

    pinMode(PIN1,OUTPUT); //10番ピン出力を宣言
    pinMode(PIN2,OUTPUT); //11番ピン出力を宣言
    
}

void loop(){

    digitalWrite(PIN1,HIGH);//10番ピンに信号を送る
    digitalWrite(PIN2,HIGH);//11番ピンに信号を送る
    delay(1000); //1秒待つ
    
    digitalWrite(PIN1,LOW); //10番ピンの信号を切る
    digitalWrite(PIN2,LOW); //11番ピンの信号を切る
    delay(1000); //1秒待つ
    
    digitalWrite(PIN1,HIGH); //10番ピンに信号を送る
    digitalWrite(PIN2,HIGH); //11番ピンに信号を送る
    delay(500); //0.5秒待つ
    digitalWrite(PIN1,LOW); //10番ピンに信号を切る
    digitalWrite(PIN2,LOW); //11番ピンに信号を切る
    delay(500); //0.5秒待つ
    
    digitalWrite(PIN1,HIGH); //10番ピンに信号を送る
    digitalWrite(PIN2,HIGH); //11番ピンに信号を送る
    delay(500); //0.5秒待つ
    digitalWrite(PIN1,LOW); //10番ピンに信号を切る
    digitalWrite(PIN2,LOW); //11番ピンに信号を切る
    delay(500); //0.5秒待つ

    

}
