/*------------------------------------------------
  第6回
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, ...
  と一秒ごとに数字を表示するプログラムを作ってください。
  -------------------------------------------------*/

//セグメントの番号を宣言
int a = 0;
int b = 1;
int c = 2;
int d = 3;
int e = 4;
int f = 5;
int g = 6;

int i = 0;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {

  //0
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) { //a~gの出力をまとめてHIGHの状態にする
    digitalWrite(i, LOW);
  }

  //1
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //2
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //3
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //4
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //5
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //6
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //7
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //8
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }

  //9
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  for (i = 0; i <= 7; i++) {
    digitalWrite(i, LOW);
  }
}
