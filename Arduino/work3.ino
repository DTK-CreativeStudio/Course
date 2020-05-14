/*-----------------------------------------------------------------------
  第3回
  DCモータが停止→正転→逆転→停止→正転→... を繰り返すプログラムを作ってください。
  逆転は、B→Aに電流を流します。
  ------------------------------------------------------------------------*/

#define PIN_A 10 //モータ動作用ピン
#define PIN_B 11 //モータ動作用ピン
#define PIN_C 12 //モータ回転ピン

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
  delay(2000);

  //ストップ
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  delay(2000);
  
  //正転 B→Aに電流を流す
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, HIGH);
  analogWrite(PIN_C, 255); //電流を流す
  delay(2000);
  
  //ストップ
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  delay(2000);
}
