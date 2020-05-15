
# 持ち物  

必要な持ち物は以下のようになっています。  
`Raspberry Pi(バージョンは全て可)`, `LED 3つ`, `抵抗(220Ω前後) 3つ`, `ジャンパーワイヤ`, `DCモータ`, `モータドライバ(ここではTA7291Pを使用, TA8428K, L9110Sでも可)`, `サーボモータ(ここではSG90を使用)`, `HC-SR04`, `7セグメントディスプレイ(1桁)`  


-----  

# 回路図と動作の様子

下の「動作」のGIFをクリックしてもらうと、それぞれ[YouTube](https://www.youtube.com/playlist?list=PLBOs6NGusnU1Qgf4UFUSh9lwwz9MMNg9b)に飛びます。  

画像が表示されない場合は何回かリロード ↻ してください。  

|CODE|内容|回路図|動作|
|:---:|:---|:---:|:---:|
|**code0**|プログラミングにおける基本事項|なし|なし|
|**code1_1**|〔デジタル〕LED制御(Lチカ)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code1_1.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code1_1.GIF)](https://youtu.be/eJ1BviUvmLA)|
|**code1_2**||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code1_2.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code1_2.GIF)](https://youtu.be/ufXmvyA9aUg)|
|***work1***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code1_2.png)|上の処理を3回繰り返したバージョン<br>[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code1_2.GIF)](https://youtu.be/_vWANHWXQmQ)|
|**code2**|〔アナログ〕LED制御(Lチカ)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code1_1.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code2.GIF)](https://youtu.be/s0iXcVvPKEs)|
|***work2***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code1_2.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/work2.GIF)](https://youtu.be/bPJRDlDThPw)|
|**code3**|DCモータ制御<br>右の「動作」|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code3.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code3.GIF)](https://youtu.be/csHwBrTciso)|
|***work3***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code3.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/work3.GIF)](https://youtu.be/8tdyDmfgcnQ)|
|**code4**|サーボモータ制御<br>下の写真ではブレッドボード経由ですが、ラズパイと直接つないでもらって構いません|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code4.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code4.GIF)](https://youtu.be/OLJFoFoytfY)|
|**code5**|距離センサー(hc-sr04)を使用した距離測定|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code5.png)|結果はお使いのラズパイのターミナルに表示されます。|
|**code6**|7セグメントディスプレイの制御|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code6.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code6.GIF)](https://youtu.be/vJSpBa3oMBk)|
|***work6***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code6.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/work6.GIF)](https://youtu.be/c-bwxFShA1c)|
|**code7**|サーボモータとボタンの複合制御(1)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code7.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code7.GIF)](https://youtu.be/Khoba3LUv0A)|
|**code8**|7セグメントディスプレイ, LED, サーボモータの複合制御(2)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/image/code8.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/RaspberryPi/gif/code8.GIF)](https://youtu.be/C6DrOzuDpb0)|  


上のGIFは[Shortcuts](https://github.com/DTK-CreativeStudio/Course/blob/master/shortcuts/)により作成されました。  

---

## 編集:  
Yusuke