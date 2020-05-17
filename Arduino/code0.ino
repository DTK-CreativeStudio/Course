/*------------------------------------------------
Hello Worldと表示して3秒後にEndと表示するプログラム
-------------------------------------------------*/

void setup() {
    Serial.begin(9600); // シリアルポートを9600bpsで開く
}

void loop() {
    Serial.println("Hello World") //Hello Worldと表示
    delay(3000)
    Serial.println("End") //Endと表示
}


/*-------------------------------------------------------
第0回
for(int i=0;i<6;i++) を使って、ループ処理中のiの値を表示し、
1秒間待機するプログラムを作ってください。
--------------------------------------------------------*/