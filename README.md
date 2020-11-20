
<div align="center">
<img width="270" height="206" src="https://github.com/DTK-CreativeStudio/Course/blob/master/image/logo_resized.png" alt="LOGO-temp" title="LOGO-temp">  <br>

  <a href="https://twitter.com/kuclubdtk">
    <img src="https://img.shields.io/twitter/follow/kuclubdtk?label=Follow%20us%20%21%21&style=social" alt="Twitter">
  </a>
    <a href="https://github.com/StylishThemes/GitHub-Dark/network">
    <img src="https://img.shields.io/powershellgallery/p/DNS.1.1.1.1" alt="Platform">
  </a>
    <a href="https://github.com/StylishThemes/GitHub-Dark/network">
    <img src="https://img.shields.io/twitter/url?style=social&url=https%3A%2F%2Fgithub.com%2FKuclubdtk-Lecture%2FLecture" alt="Twitter">
  </a>


</div>

# 目次
- [はじめに](#はじめに)  

- [プログラミングをする上で大事なこととは?](#プログラミングをする上で大事なこととは)  

- [コーディングソフトの導入](#コーディングソフトの導入)  

- [コードフォルダの目次](#コードフォルダの目次)  


※「はじめに」と「プログラミングをする上で大事なこととは」は[YouTube](https://youtu.be/6KXUEC4foUE)にて解説動画を出しています。  
[![](https://github.com/DTK-CreativeStudio/Course/blob/master/image/basic.png)](http://www.youtube.com/watch?v=6KXUEC4foUE "")  

-----

# はじめに
## プログラミングって何? :octocat:  
**プログラミングとはコンピュータにやってほしいことを、コードにより表現することです。**  
プログラミングにより、スマホのアプリを作ったり、ゲームを作ったりすることができます。  
最近ではAIや自動化の推進、テレワーク需要の高まりにより、高度なプログラミングができる人材が求められており、```人材価値を上げるスキルの一つ```として注目されています。  
（ここではその基礎となるものを学習します。）

## プログラミング言語って何? :globe_with_meridians:  
プログラミングにおけるコードの種類のことを指します。私たちが話す言語でも日本語、英語、中国語...とあるように、プログラムにおいても、CやC#、java、javascript、php、python、swift...という様にたくさんの種類があります。これらの言語はそれぞれ以下のような用途で用いられます。  

|言語の種類|用途|
|:----------:|----|
|***C, C++***|機械(ロボット)の制御|
|***C#***|windowsソフト、アプリ、ゲーム(Unity)の開発|
|***Java***|Androidアプリの開発|
|***Javascript, PHP, HTML, CSS***|Webサイトの作成|
|***Python***|AIの開発(Machine LearningやDeep Learningとよばれる分野です)|
|***Swift***|iOSアプリの開発|
|***Go***|サーバー構築|
  

学習する際はあなたのしたい、興味のある分野で使われるプログラミング言語を選んで学習すると良いです。

## プログラミングで使われる変数や、関数って何? :trollface:
変数や関数はプログラミングにおいて一番基本的なものなのですが、**変数**は値や文字(列)を**代入**することで使われます。数学の授業でxやyといった変数を学習しましたよね、あれと同じようなことをします。  
また**関数**は<u>決まった処理をするもののこと</u>を指します。同じ処理を複数回させる時にその都度、その処理コードを全て書かなくても、関数を呼び出すだけでその処理をさせることができます。  
関数と変数について、詳しくは後ほど説明します。  

-----

# プログラミングをする上で大事なこととは?
1. ## **論理的思考をすること** :eyes:  
    論理的思考とはAという原因(過程)があってBという結果がおこるという考え方のことです。
    コンピュータは論理的に動くため、(感情的になったりはしないです、たぶん)このような考え方は必須です。
2. ## **コメントを書くこと** :eyes:  
    プログラミングをする上で必ず関数や変数を使いますが、それが<b><u>'何に'、'どのように'使われる</b>かを自分が覚えておくため、或いはチーム内で共有するため</u>にそれを明記しておく必要があります。誰が見てもわかりやすいように書くと良いです。

3. ## **思考過程を明白に** :eyes:  
    プログラミングは論理的に行う必要があるため、そのコードがどういった仕組みで、中でどのような計算(おおまかで構いません)をしているのかをしっかりと理解しておく必要があります。

4. ## **見本コードの丸写しをしないこと** :eyes:  
    おそらく英語学習などで経験したことがあると思いますが、英語を読むのはスラスラできるけど、書くのは難しい...ということがありましたよね。それと同じでコーディングも読むのはできるけど、書くのが難しい...ということがあります(絶対)。ですので、見本のコードをコピペせずに、**```しっかりと自分の手で打って、コードを書き写しましょう。```**

5. ## **楽しんでコーディングすること** :eyes:
    プログラミングは楽しんですることが非常に大事です。少ししんどい程度なら構いませんが、しんどい(以上の)コーディングは行わないようにしましょう。

6. ## **英語を勉強しよう**  :eyes:
    Pythonなどの「コード記述スタイル」は比較的英語に近いため、自然言語のスキルが高い人ほどプログラミングスキルが身に付きやすい傾向があるそうです。ですので、英語を勉強しましょう笑

7. ## **プログラムが動かない時の3原則** :eyes:
    プログラミングをして初めての頃や、長いコードを書かなければならない時は、ミスが多い傾向があります。
    ミスをした時の解決策として、以下のような3原則があります。
    - プログラムが動かない**理由の把握**
    - 動くようにするための**再設計**
    - (再)設計通りのプログラムの**構築**  

-----

# コーディングソフトの導入
## ソフトの紹介 :coffee:
プログラミングでは専用のソフトを使い、プログラムを実行します。  
そこで定番のソフト(エディタ)を紹介します。
(エディタとは、ターミナル(黒い画面)上でファイルを編集するツールのことを指します。)

|コト/モノ|ソフト|ソフトの概要|
|:----:|:--------:|-----|
|**Python<br>C<br>Unity<br>他**|***Visual Studio Code***|最高のプログラミングソフトウェア(エディタ)。*C++*, *python*をはじめ、*php*, *java*, *etc*…といった様々な言語を扱える優秀なソフトです。<br>(内部で ***Arduino IDE***を介して)**Arduino**をプログラムすることができます。<br>**Raspberry Pi**も*SSH経由*でプログラムすることができます。(講習会ではこの機能は使いません)|
||***Visual Studio***|Visual Studio Codeと同様にプログラミングができますが、こちらは統合開発環境とよばれるソフトです。Unity、C/C++やpythonなどほかの言語も扱えます。<br>(容量も大きいので、講習会では使用しません)|
|**Python<br>C<br>他**|***Repl.it***|これはソフトではなくウェブサイトなのですが、あらかじめセットアップが行われているため、初心者に扱いやすいプログラミングプラットフォームになっています。|
|**Arduino**|***Arduino IDE***|**Arduino**をプログラミングするための定番ソフトウェア。今回の講習会ではこのソフトを内部処理のためだけに使います。|
|**Raspberry Pi**|***vim***|これはソフトではなく、エディタなのですが、プログラミングのためのファイル編集ができます。これはターミナル(黒いコマンド入力の画面)で使用します。今回はこれは使用しません。
||***Thonny***|プログラミング初心者の方にとって使いやすいコーディングソフト。セットアップされたラズパイにはすでに入っています。|
|**Unity**|***Unity Personal***|有名のゲームエンジンであるUnityのゲームを作るための開発環境。|  


## コーディングソフトの導入
こちらのサイトに上で紹介したソフトの導入手順が書いてあるので、そちらをご覧ください。  

[Visual Studio CodeでC/C++のプログラミングをしよう！](https://kuclubdtk.hateblo.jp/entry/2020/04/11/114504)

[Visual Studio CodeでPythonのプログラミングをしよう！](https://kuclubdtk.hateblo.jp/entry/python_amateur)   

[Visual Studio CodeとUnityでゲームをつくろう！](https://kuclubdtk.hateblo.jp/entry/unity_amateur)  

[Repl.it でプログラミングをしよう！](https://kuclubdtk.hateblo.jp/entry/repl.it_amateur)

-----

# コードフォルダの目次
## 説明  :book:
この講習会資料では以下のようにフォルダーが分けられています。    

言語:  
- [x] **Python**  
- [x] **C**  

デバイス:  
- [x] **Raspberry Pi**  
- [x] **Arduino**  

ゲーム:
- [x] **Unity**  
  
「言語」フォルダでは**基本的なプログラミングの仕方**を学びます。    
「デバイス」フォルダーでは「言語」フォルダで習得したスキルを生かして、**LED、サーボモータなどを制御する方法**を学習します。  
「ゲーム」フォルダーでは**C#を使ったUnityゲームの作成の仕方**を学びます。  

## 目次 :musical_score:  

-----
### 「言語」フォルダの目次  
program0:　プログラミングにおける基本事項、注意事項    
program1:　足し算、引き算、掛算、割り算、割り算の余り  
program2:　if文  
program3:　ループ(有限)  
program4:　ループ(無限, break, continue)  
program5:　多重ループ    
program6:　配列(Pythonではリスト)  
program7:　2次元配列  
program8:　関数の作成(1) 〔返り血なし〕  
program9:　関数の作成(2) 〔返り血あり〕  
program_last:　構造体(PythonではClass)  

work0 \~ work_lastはそれぞれprogram0 \~ program_lastの課題ファイルです。

-----

### 「デバイス」フォルダの目次  
code0: プログラミングにおける基本事項  
code1: 〔デジタル〕LED制御(Lチカ)  
code2: 〔アナログ〕LED制御(Lチカ)  
code3: DCモータ制御  
code4: サーボモータ制御  
code5: 距離センサー(hc-sr04)を使用した距離測定  
code6: 7セグメントディスプレイの制御  
code7: サーボモータとボタンの複合制御(1)  
code8: 7セグメントディスプレイ, LED, サーボモータの複合制御(2)  

work0 \~ work3, work6はそれぞれcode0 \~ code3, code6の課題ファイルです。  
  
-----  
# ライセンス  

ここに載っているコード等はすべて[Apache License 2.0](https://github.com/DTK-CreativeStudio/Course/blob/master/LICENSE)の下保護されています。

-----
# 参照  

[Relating Natural Language Aptitude to Individual Differences in Learning Programming Languages](https://www.nature.com/articles/s41598-020-60661-8)  

[Understand, Design, Build: A Framework for Problem-Solving](https://lob.com/blog/understand-design-build-a-framework-for-problem-solving)  

[プログラミングを上達するには量と質のどちらがより大切なのか？](https://gigazine.net/news/20190410-programming-more-or-better/)  

[プログラミング学習に「GitHubを使用すること」の効果とは？](https://gigazine.net/news/20180816-github-education-learner-outcome/)  

[.gitignoreについて](https://qiita.com/sf213471118/items/efbc0abf028a3ead72e7)  

[shields.io](https://shields.io/)  

[EMOJI CHART SHEET](https://www.webfx.com/tools/emoji-cheat-sheet/)  

[GitHub-Cheat-Sheet](https://github.com/tiimgreen/github-cheat-sheet/blob/master/README.ja.md)  

-----  

# YouTube  

[電気通信工学研究会](https://www.youtube.com/channel/UCOgOnA8s-EwlfLQ5gLf2Zmg)  

-----  

# 編集  

総合編集: **[Yusuke](https://github.com/yusuke-1105)**  
  
Arduino: **カルロス**, **[Yusuke](https://github.com/yusuke-1105)**  
Raspberry Pi: **[Yusuke](https://github.com/yusuke-1105)**  
Python: **[Yusuke](https://github.com/yusuke-1105)**  
C++: **Horiuchi**, **[Mikawa](https://github.com/ryoto1038)**,  **Inaba**  
Unity: **DAO**  

電気通信工学研究会(2020)
