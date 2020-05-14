# **解説**
## 目次
- [if(条件分岐)](#if)  
- [while](#while)  
  - [while True](#program4_2)  
- [if break](#program4_2)  
- [if continue](#program4_2)  
- [リスト](#リスト)  
  - [一次元のリスト](#リスト)  
  - [2次元のリスト](#2次元のリスト)  
  - [リストとfor文](#リストとfor文)   
- [関数](#関数)  
  - [返り値](#返り値)
- [クラス](#オブジェクトとは)
  - [オブジェクトとは](#オブジェクトとは)  
  - [クラスとは](#クラスとは)  
  - [インスタンスとは](#インスタンスとは)  
  - [クラスを作成する](#クラスを作成する)  
    - [インスタンス変数](#インスタンス変数)
    - [メソッド](#メソッド)
    - [コンストラクタ](#コンストラクタ)
    - [インスタンスメソッド](#インスタンスメソッド)
    - [継承](#継承)          


## program2  
### if
ここでは「**if文**」（「条件分岐の構文」）というものを扱います。これで条件に応じた処理をさせることができます。  
例えば、もし、入力された数字が5以下であれば、ターミナルに「5以下」と表示し、その他(5より大きい値)であれば、「5より大きい」と表示するといった具合です。  

このようにコードを書きます。  
<img height=187 width=451 src="https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/image/Python/python_if.png" alt="Python" title="Python">  

#### program2のフローチャート(説明図)  
[ここ](https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/Python/Basic/FLOWCHART.md)にあります。  


## program3   
### while  
ここでは「**while文**」(「繰り返し処理」)というものを扱います。
これは同じ処理を真である限り続けるというものです。

このように書きます。  

<img height=107 width=592 src="https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/image/Python/python_while-for.png" alt="Python" title="Python">

ここで注意していただきたいのですが、for文では、その回数分ループ変数に数値が代入されていきます。  
ループ変数に代入される数値は、<b>0,1,2,3,4, ...という様に`0`から始まります。</b>  

<u>よって回数をnとすると、ループ変数に代入される値は、0~n-1となります。</u>

#### program3のフローチャート  
[ここ](https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/Python/Basic/FLOWCHART.md)にあります。  


## program4_1  
### 無限ループ  
おそらくこれはゲームやスマホのバグで聞いたことがある言葉だと思いますが、意図的、あるいは偶発的によりプログラムが永遠に続くことを指します。  

無限ループが発生するプログラムをprogram4_1.pyで扱っているので、プログラム下に書いてある説明書きをよく読んで、プログラムを実行してください。  


#### program4_1のフローチャート  
[ここ](https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/Python/Basic/FLOWCHART.md)にあります。  

## program4_2  
無限ループで使用できるものを紹介します。
### while True
これは条件を常に真の状態にさせて、**永遠にループ**を続けたい場合に使用します。  
稼働し続ける必要のあるシステムなどで使用します。  
  
### if break
ループ処理中にある条件に達した時に、そのループから**脱出**するものです。
```python
if
    break
```

### if continue
ループ処理中にある条件に達した時に、条件分岐(そのループの最初)のところに戻ります。  
```python
if
    continue
```  

#### スペース4つ問題  
`if`と書いた後に`break`や`continue`を書く場合は、  
改行 → Tabキー → (`break` or `continue`)  


#### program4_2のフローチャート  
[ここ](https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/Python/Basic/FLOWCHART.md)にあります。  

## program5  

#### program5のフローチャート  
[ここ](https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/Python/Basic/FLOWCHART.md)にあります。  

## program6  
### リスト  
プログラミングをするにつれて、データ(数値、文字列)が多くなっていきます。  
その都度変数を作って、値を格納していくのは大変効率が悪いです。  
そこで役立つ**リスト**という1つの変数にたくさんのデータ(値)をまとめられる機能を紹介します。  
リストに代入された数値を**要素**といい、順番は0番目から順に始まっていきます。   
例)list_aというリストに順に`0`, `1`, `2`, `3`, `4`と代入していくと、リストの0番目に0が、0番目に1が...　という様になります。  
<img src="https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/image/Python/python_list_1.png" alt="Python" title="Python">

## program7  
### 2次元のリスト  
ここではリストの中にリストが入っている、2次元のリストというものを紹介します。  
 
<img src="https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/image/Python/python_list_2.png" alt="Python" title="Python">  

上の表で、列番号をn、行番号をmとすると、  
```python
list_a[0][0]=1, list_a[0][1]=2, ... ,list_a[n][m]
```  
という様になります。 
また、3次元以上のリストの作成も可能です。  

### リストとfor文
また、リストはfor文と組み合わせることができ、以下のように書きます。  
これはリストに要素がある限りループし、その都度、要素変数にリストの要素を順に代入していくというものです。

<img src="https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/image/Python/python_list_for.png" alt="Python" title="Python">   

例)
```python
list_b=[0, 1, 2]
```
というリストがあるとします。
これを`for`を使い、数値を表示させるプログラムを書く際以下のように書きます。
```python
for list_c in list_b
    print(list_c)
```
(`list_c`はプログラム中でまだ使用していない変数名で書く必要があります。)  
上の結果は以下のようになります。
```
0
1
2
```

## program8  
ここでは同じ処理を何回もさせたい場合に使える関数というものを紹介します。
### 関数  
値を渡されると、何かしらの計算をして、その値を返すもののことを関数といいます。  
関数は以下のように書きます。
```python
def 関数名(仮変数1, 仮変数2, ....):
    処理

# 関数の処理をさせたい時
関数名(引数1, 引数2, ...)
```

これを見ただけだと理解し難いと思うので、まずはコードを書いてみて下さい。  

```python
def calculate1(var1, var2):
    print("var1 = "+str(var1)+", var2 = "+str(var2))
    c=var1+var2
    print(c)

a=2
b=3
c=4
calculate1(a, b)
calculate1(b, c)
```
プログラムを実行すると、以下のようにターミナルに表示されます。
```
var1 = 2, var2 = 3
5
var1 = 3, var2 = 4
7
```
一番下の行を見てください。`calculate1(a, b)`というものがありますよね。  
これが「**関数の呼び出し**」と呼ばれるもので、ここで関数の処理をさせています。()のなかに(計算させたい)引数を入れることで引数を使った計算をさせることができ、あらかじめ宣言した変数であれば、どのような変数でも関数の中に入れることができます。  
<img src="https://github.com/Kuclubdtk-Lecture/Lecture/blob/master/image/Python/python_def_no_return.png" alt="flowchart" title="flowchart">  
上のプログラムでは`def calculate1(var1, var2)`の`val1`と`val2`はそれぞれ`a`と`b`, `b`と`c`が対応しており、上のように変数値に代入されている値が代入されます。  
値が代入された後は関数の中に書かれている処理が行われます。  
  
また、仮変数がない関数も作成することができます。  
ではコードを書いてみてください。  

```python
def calculate_no_return1():
    print("a = "+str(a)+", b = "+str(b))
    c=a+b       #cはローカル変数で、この関数外では反映されません
    print(c)

a=2
b=3

calculate_no_return1()
#print("c = "+str(c)) 
```
注意事項ですが、cは上の関数内だけで出てくる「**ローカル変数**」と呼ばれる変数です。(上の関数外ではcという変数が出てきていませんよね)  
関数外では宣言されていないためローカル変数は関数外では使用できません。  
試しに`print("c = "+str(c))` を実行してみると、エラーが出ますよね。  


## program9  
### 返り値  
上では関数内の計算などの処理は関数内だけで完結しますが、今回扱う関数は計算結果、それに類する処理の結果を「**返り値**」として返してくれます。  
program9.pyがそれで、仮変数ありと仮変数なしのバージョンを用意しているので、いつも通り書いて理解してください。内容はprogram8.pyと同じです。  

program9.pyの関数は(関数内の)最後に`return`が書いてありますよね。このように関数の最後に`return`を書くことで、処理結果を返すことができます。その処理結果は上のように変数に代入することなどにより、使用することができます。また、仮変数がない関数もあります。


## program_last  
Pythonはオブジェクト指向のプログラミング言語であるため、「**クラス**」という機能が使えます。
### オブジェクトとは
Pythonで書いたプログラムが操作したり、処理したりするデータのことを**オブジェクト**といいます。  
具体的には、整数や文字列、リスト、タプルなどのデータ(**変数**)のことを指します。  

### クラスとは
クラスとはそのオブジェクトを生成するための型(int型、float型、str型, ...)を独自に作るときに使用するもののことを言います。  
<u>長く、機能の多いプログラムを書くときに使います。</u>

### 確かめてみよう
```python
a="Hello"
b=1
c=2.0
print(type(a))
print(type(b))
print(type(c))
```  
これを実行するとターミナルには以下のように表示されます。
```
<class 'str'>
<class 'int'>
<class 'float'>
```
これは文字列'a'の型は「str**クラス**」である、つまり文字列'a'はstrクラスの**オブジェクト**となることを示している。  
他にも以下のようなプログラムを実行すると、
```python
b=1
c=2.0
print(type(b))
print(type(c))
``` 
これを実行するとターミナルには以下のように表示されます。
```
<class 'int'>
<class 'float'>
```
と表示され、b、cはそれぞれint, floatクラスの**オブジェクト**であることを示しています。  

#### **注意**  
クラスの概念は難しく、説明を聞いても理解し難いかもしれないので、ここから下は、  
①解説文を読んで、プログラムを書いて理解する。  
②プログラムを書いて理解する。  

このどちらの方法で学習していただいて構いません。  
ちなみに私は初心者の頃は②で学習しました。  

### インスタンスとは  
作成したクラスで作成されたオブジェクトのことを指します。

### クラスを作成する  
Pythonではクラスは自作できます。ここではその方法について紹介します。  
まず初めにインスタンスについて紹介します。  

### クラスの書き方  
Pythonでは上のようなクラスを自分で作成することができる。クラスは以下のように作成します。
```python
class [classの名前]:
    クラス定義の本体
```
基本的な例を以下に示すので、このコードを書いてみてください
(↓インスタンスの作成の仕方も書いてあります。)

```python
class Class1():
    pass             # 処理がない場合はこれを書く

instance0=Class1()   #インスタンスの作成

print(type(instance0))
```
見ていただければ理解していただけると思いますが、このように書きます。  
上ではinstance1というインスタンス(オブジェクト)が作成されており、「処理せず何もしない」というクラスによって作成されています。  
なお、一番下の行ではinstance1の種類をターミナルに出力しており、出力内容は以下のようになっています。
```python
<class '__main__.Class1'>
```
しっかりと`instance0`は`Class1`クラスのインスタンス(オブジェクト)とひょうじされていますね。  
このようにしてクラスを作り、インスタンスを作成します。  
('\_\_main__' はトップレベルのコードが実行されるスコープの名前です。モジュールが、標準入力から読み込まれたとき、スクリプトとして実行されたとき、あるいはインタラクティブプロンプトのとき、\_\_name__ には '\_\_main__' が設定されます。)

### インスタンス変数  
クラスのインスタンスごとに異なる値を保存する変数のことをインスタンス変数といいます。  
これを聞いてもしっくりこない方が大半だと思うので、下のコードを書いてみてください。

```python
class Class2():
    def __init__(self, content, times):
        self.message = content          #表示する文字列
        self.value = times              #文字列の後ろに表示する！の回数

instance1 = Class2("Hello World", 2)
#Class2の()の中に(content, times)の内容を書いて代入し、instance1というインスタンスを作成

print(instance1.message+"!"*instance1.value)
#print(表示する文字列+"!"×回数)
```
### メソッド  
上記のプログラムの中にあるように`class`の中にある、`def`(関数)以下をメソッドといいます。 
### コンストラクタ
またメソッドの中でも`def__init__()`以下のことをコンストラクタといいます。 
```python
def __init__(self, [param]):
    インスタンスの初期化処理を行うコード
```
`self`はインスタンスを表しています。(class自身と思ってもらって構いません)  
`[param]`はインスタンス変数です。上のコードのように好みの変数名で何個でも書けます。  

これで上のプログラムは理解していただけると思います。

次はインスタンスメソッドについて説明します。  

### インスタンスメソッド  
ひとまず、以下のプログラムを書いてください。  
```python
class Class3():
     
    def __init__(self, a,b,c):
        self.num1 = a
        self.num2 = b
        self.num3 = c
 
    def calculate(self):        # インスタンスメソッド
        result = self.num1+self.num2+self.num3  # インスタンス変数a, b, cそれぞれを足した値をresultに代入
        print(result)
 
instance2 = Class3(1,2,3)
instance2.calculate()       # 1+2+3の計算結果である6を表示
```  
このようにクラスの中にあるコンストラクタ以外の`def`関数をインスタンスメソッドといいます。  
以下のように書きます。
```python
class クラス:
    ...
    def インスタンスメソッド:
        ...
インスタンス作成
インスタンス.インスタンスメソッド
```
おそらくこれも見てもらうと理解していただけると思います。

また、インスタンスメソッド内で値を返すことができます。
以下がそれです。このコードも書いてみてください。
```python
class Class3():
     
    def __init__(self, a,b,c):
        self.num1 = a
        self.num2 = b
        self.num3 = c
 
    def calculate(self):
        result = self.num1+self.num2+self.num3  # インスタンス変数a, b, cそれぞれを足した値をresultに代入
        return result       # 計算結果を返す
 
instance2 = Class3(1,2,3)
a=instance2.calculate()       # 1+2+3の計算結果である6を代入
print(a)
```
このように変数にインスタンスメソッドによる計算結果を代入することができます。  

### 継承  
ひとまずコードを書いていましょう。
```python
class Parent():
    def parent_func(self):
        print("PARENT")
         
class Child(Parent):        #Parentクラスを継承
    def child_func(self):
        print("CHILD")
 
k = Child()         # インスタンス作成
k.parent_func()     # PARENT と表示
k.child_func()      # Child と表示
```
下から2行目のところで、`Child()`のインスタンス`k`のメソッド`parent_func()`を呼び出しています。  
ですが、`Child()`のなかには`parent_func()`はありません。  
ではなぜ*それ*を呼び出せるのでしょうか？  
それは<b> `Child()`が`Parent()`の要素を呼び出しているためです。そのため`Parent()`クラスのメソッドである、`parent_func()`をインスタンス`k`で使用することができます。</b>

このようなクラスの仕組みを**継承**といいます。
また、ここでいう`Parent()`クラス、`Child()`クラス、それぞれを、**親クラス**、**子クラス** といいます。  

-----  

みなさんいかがでしたか？  
以上がPythonの基本的な文法となっています。  
PytyhonはAI系でよく使用されていますが、これまでで学習したことだけでは、到底それらを作ったり、使用したりすることができません。  
そのためにはライブラリといううものを使う必要があります。  
予定では秋学期にライブラリやAPIを使ったアプリケーションの作成方法を紹介する予定ですので、それまでにPythonを復習しておいてください。

-----  
編集: **[Yusuke](https://github.com/Kuclubdtk-Lecture)**  

-----

参照:  
[Python3.8ドキュメント](https://docs.python.org/ja/3/library/__main__.html)


