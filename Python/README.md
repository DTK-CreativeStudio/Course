![GitHub Pipenv locked Python version](https://img.shields.io/github/pipenv/locked/python-version/metabolize/rq-dashboard-on-heroku)  

※レクチャーに入る前にプログラミング環境を整えておいてください。  
2通りの方法があります。  
1. **おすすめ**  
[Visual Studio Code でPythonのプログラミングをしよう！](http://kuclubdtk.hateblo.jp/entry/python_amateur)  
(3番までの作業を完了させておいてください)  

2. **パソコン初心者の方や、↑のやり方でできなかったという方**  
[Repl.it でプログラミングをしよう！](http://kuclubdtk.hateblo.jp/entry/repl.it)  
(「Python編」のセットアップを完了させておいてください)  

# 目次
- [はじめに](#はじめに)  
    - [Pythonの特徴](#Pythonの特徴)  
    - [Pythonの用途](#Pythonの用途)  
    - [Pythonの開発者と由来](#Pythonの開発者と由来)  

- [Python入門](#Python入門)  
    - [変数](#変数) 
    - [文字(列)と変数](#文字と変数)  
    - [型(データ型)](#型(データ型)) 
    - [関数](#関数)  
    - [コメント](#コメント) 
    - [シングルとダブル](#シングルとダブル)
    - [\+ 記号](#連結記号)   
    - [改行と空白](#改行と空白)
    - [その他の記号](#その他の記号)
    - [代入](#代入)  
    - [print( )関数における文字と数値の共存](#print関数における文字と数字の共存)  
    
- [カリキュラム](#カリキュラム)  
    - [目次](#目次)  
    - [進め方](#進め方)  

- [プログラムごとの解説](https://github.com/DTK-CreativeStudio/Course/tree/master/Python/Basic)  

-----

# はじめに

## Pythonの特徴
- 1行で様々な処理を実行可能
- 多言語と比べ、書き方(構文)がシンプル
- 様々な機能を持ったライブラリ(拡張プログラム)が豊富に存在している。
- オブジェクト指向である(これについては[Basic](https://github.com/DTK-CreativeStudio/Course/tree/master/Python/Basic)フォルダーで説明します。)

## Pythonの用途
- 算術計算系
- Webアプリ開発
- 初心者のプログラミング学習
- 機械学習やディープラーニング

## Pythonの開発者と由来
Guido van Rossum氏が1991年に開発し、名前はBBC制作のコメディ番組<b>Monty **Python's** Flying Circus(空飛ぶモンティパイソン)</b>に由来している。

-----

# Python入門

## 半角と全角
プログラムは基本半角で書いてください。  
ただし、日本語や顔文字は全角で大丈夫です。

## 変数
**変数**は自分で設定し、値や文字(列)を**代入**して使用します。
a,bなどの単純な文字を使えます。基本的に英文字や英文字と_の組み合わせで変数を設定することが多いです。  
(代入については下で説明します。)

## 文字と「数値」
私たちは日生活で「あいうえお」を見ると文字(列)、「123」を見ると、数値だと思いますよね。しかし、プログラミングでは少し見方を変える必要があります。「あいうえお」はプログラミングでも文字(列)として扱われますが、「123」は文字(列)としても、数値としても扱われます。
それに関しては下で説明していきます。  

## 型(データ型)  
そのデータがどのようなデータのタイプかを表したものです。  
主に文字列や数値、配列、タプル(後述します)の四つに分けられます。  

## 関数

[Visual Studio Code でPythonのプログラミングをしよう！](http://kuclubdtk.hateblo.jp/entry/python_amateur)の3番までの作業が完了している前提です。

では、手順書の4番まで進んで、プログラムの実行をしてみましょう。

実行した後、またこちらに戻ってきて来てください。

```python
print("Hello World")
```
と書くと、ターミナルに`Hello World`と表示されましたよね。  
これは`print()`
関数により、( )の中の文字が表示されたためです。
<u>( )のなかの文字(列)や数字を**引数**</u> と言い、<u>
**引数**を与えてやることで、それに対して何らかの計算をし、その結果を返すもののことを**関数**</u> と言います。  
ちなみに関数は自分で作ることもでき、プログラム内で定義することによって動作させることができます。  
(program8以降で扱います。)

ここに代表的な関数を載せておきます。  
( ↓に出てくる浮動小数点とは「小数点」のことです。)

|関数|内容|例|
|:---:|:---|:---|
|```print()```|引数の文字や変数をターミナルに出力|```print("Hello World")```　→　`Hello World` とターミナルに出力|
|```input()```|引数の文字や変数をターミナルに出力し、ターミナルで<b>文字(列)</b>の入力受け取る|```input("数字を入力してください")```→`数字を入力してください`とターミナルで表示され、文字を入力する。|
|```int()```|引数の文字列や整数値、浮動小数点数値を整数値にして返す|```int("7.0")```→`7` & ```int(7.6)```→`7.0`|
|```float()```|引数の文字列や整数値、浮動小数点数値を浮動小数点数値にして返す|```float("7.2")```→`7.2` & ```float(7)```→`7.0`|
|```str()```|引数の文字(列)や数字を<b>文字(列)</b>に変換|```str(7)```→`'7'`|

上の関数はPython講習会で使用するので、これからで良いので慣れて覚えてください。


## コメント
プログラムを書いていくうちにそれがどのようなことを行うプログラムか曖昧になってくる時があります。そのようなときに備えて**コメント**と呼ばれる説明文を残しておく必要があります。
#### 単行の場合
`#`で始まる文がコメントとなります。  
では下のコードを書いてみましょう。
```python
print("Hello World")    #文字を表示
```  
これで、プログラムを実行してみてください。そうすると、`#`以下のコメントは無視されてエラーなどが発生せず、実行されます。
また、これはその行だけ有効なので、改行すれば無効となります。

#### 複数行の場合
` ''' `で、その行を囲むと複数行にわたり、コメントができます。

## シングルとダブル
文字を表示させる際に
```python
print("Hello World")
``` 
でも
```python
print('Hello World')
``` 
でも、どちらも同じようにターミナルに表示されます。
Pythonでは`"`と`'`、どちらで書いてもらっても違いはありません。

## 連結記号
`+` 記号を使うことで、文字列や、変数をドッキングさせたり、足し算をさせたりすることができます。  
前者についてですが、一回、コードを書いてみましょう。
```python
print("Hello "+"World")
```
では、再びプログラムを実行してみましょう。そうすると、
`Hello World`
と表示されます。  
このように `+` 記号を使うことで、文字列同士や文字列と変数をくっつけることができます。

## 改行と空白  
```print()```関数の引数で改行をしたい場合は、`\n`。
空白(スペース)を3つ作りたい場合は、`\t`です。  

(`\`は￥マークのあるキーを押していただくと、打てます。)  

以下のようなコードを書いてみて下さい。
```python
print("Hello\nWorld\t!")
```
そうすると以下のように表示されます。
```python
Hello
World   !
```

## その他の記号
以下に数値計算やif文(program3で学習します)で使うことができる大小を表す記号などをここにまとめておきます。
|記号|内容|
|:---:|:----|
|<|小なり|
|>|大なり|
|<=|小なりイコール|
|>=|大なりイコール|
|&&|and、かつ|
|\|\||or、または|


## 代入
上で述べた通り、変数は代入をされることで、使用されます。<u>代入では`=`記号を使います。 </u> 
以下のようなコードを書いてみてください。
```python
a=1+2   #aに1と2を足したものを代入
```
これで実行をしてみると、aに1と2が足し算された結果である、3が代入されています。

あと、文字(列)も変数に代入することができます。
```python
a="Python"
```

## print関数における文字と数字の共存

しかし、これでは本当に代入されたかわかりませんよね。  
ではターミナルに表示させてみましょう。以下のコードを書いてみてください。
```python
print("a="+a)
```
では、実行してみてください。
ここで以下のようなエラーが発生します。  

<img height=100 width=560 src="https://github.com/DTK-CreativeStudio/Course/blob/master/image/Python/Python_error.png" alt="Python_error" title="Python_error">

`TypeError: can only concatenate str(not "int") to str`  
〔str()同士しか連結させることができないよ、str()とint()は連結させることができないよって書いてあります。〕  
これは `print()`関数の引数が、1つの型だけ、この場合だと「文字(列)」と「数字」のどちらかだけしか取れないために発生するエラーです。よって「数字」の変数である`a`を文字列にしてやる必要があります。  
そこで[関数](#関数)の表で書かれている、`str()`関数を使います。これにより正しく表示させることができます。
以下のようにコードを書いてみましょう。
```python
print("a="+str(a))
```
これで、プログラムを実行してみてください。
そうすると、以下のように正しく実行されるはずです。
```
a=3
```
これはこれから頻繁に使用するのでしっかりと覚えておいてください。

-----

# カリキュラム
## 目次
[program0](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program0.py):　プログラミングにおける基本事項、注意事項    
[program1](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program1.py):　足し算、引き算、掛算、割り算、割り算の余り  
[program2](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program2.py):　if文  
[program3](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program3.py):　ループ(有限)  
[program4](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program4.py):　ループ(無限, break, continue)  
[program5](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program5.py):　多重ループ    
[program6](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program6.py):　リスト  
[program7](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program7.py):　2次元配列  
[program8](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program8.py):　関数の作成(1) 〔返り値なし〕  
[program9](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program9.py):　関数の作成(2) 〔返り値あり〕  
[program_last](https://github.com/DTK-CreativeStudio/Course/blob/master/Python/Basic/program_last.py):　クラス  

work0 \~ work_lastはそれぞれprogram0 \~ program_lastの課題ファイルです。


## 進め方
基本各自で進めてもらいます。

これまで扱った内容が上の<b>[Basic](https://github.com/DTK-CreativeStudio/Course/tree/master/python/Basic)フォルダーのprogram0</b>の内容となっています。  
program0のファイルを見てください。  
下の方に課題が書いてあると思うので、自身で新しいファイルを作成して、そのお題のプログラムを書いてみてください。  
終わったらworkファイルを開き、私の解答と見比べて答え合わせをしてみてください。  

それが終わると、今度はprogram1を開いて...という風に進めてください。

program0(今回) → work0  
&emsp;&emsp;↓  
program1 → work1  
&emsp;&emsp;↓  
program2 → work2  
&emsp;&emsp;↓  
&emsp;&emsp;...  
    という感じです。

#### [Basic](https://github.com/DTK-CreativeStudio/Course/tree/master/python/Basic)フォルダーの下の方に(README.md)解説があるので、適宜見てください。


※**プログラムは初心者の方なら見ただけでわからないことが多いと思いますが、一回書いてみて、プログラムを実行してもらうとおそらく理解ができると思うので、そうしてみてください。**

※**プログラムは自分で書いて学ぶのが最良の学習方法なので、課題プログラムをしっかり書き終わるまで、workファイルは見ないようにしてください。**  

※**プログラムはたくさんの書き方があります。ですので、workファイルに書いてある私の解答と違うプログラムを書いていたとしても、意図した通りに動いていれば、それは正しいコードと言えます。**  


-----  

参照:  
[Python ドキュメント](https://docs.python.org/ja/3/reference/datamodel.html#objects-values-and-types)  

-----  

編集:
[Yusuke](https://github.com/yusuke-1105)