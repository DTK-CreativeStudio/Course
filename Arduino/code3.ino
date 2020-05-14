/*----------------------------------
DCモータをPWM(アナログ出力)により操作
モータドライバはTA7291Pを使います。
----------------------------------*/

#define PIN_A=10; //モータ動作用ピン
#define PIN_B=11; //モータ動作用ピン
#define PIN_C=12; //モータ回転ピン

void setup() {

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  //正転 A→Bに電流を流す
  digitalWrite(PIN_A, HIGH);
  digitalWrite(PIN_B, LOW);
  analogWrite(PIN_C, 255); //電流を流す
  delay(100);

  //ブレーキ
  digitalWrite(PIN_A, HIGH);
  digitalWrite(PIN_B, HIGH);
  delay(100); 
}

/*-----------------------------------------------------------------------
第3回
DCモータが停止→正転→逆転→停止→正転→... を繰り返すプログラムを作ってください。
逆転は、B→Aに電流を流します。
------------------------------------------------------------------------*/