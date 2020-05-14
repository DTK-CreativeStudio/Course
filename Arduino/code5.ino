/*-------------------------
HCS-R04を使用した距離の取得
-------------------------*/

int trig = 13; // 出力ピン
int echo = 2; // 入力ピン

int val1=0;
int val2=0;
int value=0;
int number = 0;
int value_of_cds = 0;

byte pinout1=10;
byte pinout2=12;

void setup() {

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  Serial.begin(9600); //モニターに出力するための設定

}

void loop() {

  //========================================
  // 超音波の出力終了
  digitalWrite(trig,LOW);
  delayMicroseconds(1);
  // 超音波を出力
  digitalWrite(trig,HIGH);
  delayMicroseconds(11);
  // 超音波を出力終了
  digitalWrite(trig,LOW);
  // 出力した超音波が返って来る時間を計測
  int t = pulseIn(echo,HIGH);
  // 計測した時間と音速から反射物までの距離を計算
  float distance = t*0.017;
  // 計算結果をシリアル通信で出力
  Serial.print(distance);
  Serial.println(" cm");

  //============================================

  delay(100);
}
