
# 持ち物  

必要な持ち物は以下のようになっています。  
`Arduino Uno(できれば公式のもの、他でも可)`, `LED 3つ`, `抵抗(220Ω前後) 3つ`, `ジャンパーワイヤ`, `DCモータ`, `モータドライバ(ここではTA7291Pを使用, TA8428K, L9110Sでも可)`, `サーボモータ(ここではSG90を使用)`, `HC-SR04`, `7セグメントディスプレイ(1桁)`  


-----  

# 回路図と動作の様子  

下の「動作」のGIFをクリックしてもらうと、それぞれ[YouTube](https://www.youtube.com/playlist?list=PLBOs6NGusnU2e5Hc0gtLqlL9b3xkcsrQi)に飛びます。  

画像が表示されない場合は何回かリロード ↻ してください。  

|CODE|内容|回路図|動作|
|:---:|:---|:---:|:---:|
|**[code0](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code0.ino)**|プログラミングにおける基本事項|なし|なし|
|**[code1](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code1.ino)**|〔デジタル〕LED制御(Lチカ)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code1.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code1.gif)](https://youtu.be/YarF-ElrnXg)|
|***[work1](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/work1.ino)***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/work1.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/work1.gif)](https://youtu.be/M8daUXaHUhQ)|
|**[code2](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code2.ino)**|〔アナログ〕LED制御(Lチカ)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code2.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code2.gif)](https://youtu.be/1X8Q2MBojDE)|
|***[work2](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/work2.ino)***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/work2.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/work2.gif)](https://youtu.be/QWDT6VXls2Y)|
|**[code3](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code3.ino)**|DCモータ制御<br>右の「動作」|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code3.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code3.gif)](https://youtu.be/Ou78hnaaiv4)|
|***[work3](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/work3.ino)***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/work3.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/work3.gif)](https://youtu.be/fHkT-R7O8UY)|
|**[code4](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code4.ino)**|サーボモータ制御<br>下の写真ではブレッドボード経由ですが、ラズパイと直接つないでもらって構いません|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code4.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code4.gif)](https://youtu.be/IKr_oO1ZUvg)|
|**[code5](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code5.ino)**|距離センサー(hc-sr04)を使用した距離測定|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code5.png)|結果はお使いのラズパイのターミナルに表示されます。|
|**[code6](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code6.ino)**|7セグメントディスプレイの制御|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code6.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code6.gif)](https://youtu.be/iK9bSGNOKUY)|
|***[work6_1](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/work6_1.ino)<br>[work6_2](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/work6_2.ino)***||![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/work6.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/work6.gif)](https://youtu.be/op9uUG77ciA)|
|**[code7](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code7.ino)**|サーボモータとボタンの複合制御(1)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code7.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code7.gif)](https://youtu.be/cwpbQ1_iMBg)|
|**[code8](https://github.com/DTK-CreativeStudio/Course/blob/master/Arduino/code8.ino)**|7セグメントディスプレイ, LED, サーボモータの複合制御(2)|![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/image/code8.png)|[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/circuits/Arduino/gif/code8.gif)](https://youtu.be/tCj05Hqqnjo)|  


上のGIFは[Shortcuts](https://github.com/DTK-CreativeStudio/Course/blob/master/shortcuts/)により作成されました。  

---

## 編集:  
**カルロス**  
**[Yusuke](https://github.com/yusuke-1105)**