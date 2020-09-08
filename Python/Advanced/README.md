

# スライス  
`[start:stop]`or`[start:stop:step]`で、`start <= x < stop`の範囲で`step`飛ばしずつで文字抽出
`start`,`stop`,`step`のところで空欄ならば0とみなす
```python
print("パタトクカシーー"[::2])
```
```
パトカー
```

```python
print("パタトクカシーー"[1::2])
```
```
タクシー
```
`start`が負の数の場合、相対インデクスとして解釈されます。
```python
s = "Python"
s[-2:]
```
```
'on'
``` 


# forループで便利な関数  
```python
a = ['あ','い','う','え','お']
b = ['か','き','く','け','こ']
```
例
```python
for i,ai in enumerate(a):
  print(i,ai)
```
```
0 あ
1 い
2 う
3 え
4 お
```

```python
for ai,bi in zip(a,b):
  print(ai,bi)
```
例
```
あ か
い き
う く
え け
お こ
```

```python
for i,(ai,bi) in enumerate(zip(a,b)): #zipのところを()で囲った
  print(i,ai,bi)
```
例
```
0 あ か
1 い き
2 う く
3 え け
4 お こ
```

# リスト内包表記  
リスト内包表記はforループで回してリストに要素を追加する場合に使います。
見た目がすっきりしていて、for文を回すより、高速です。  
```python
[リストに代入する変数 for 任意の変数名 if 条件式 else リストに代入する変数 for 任意の変数名]
```
```python
str1 = 'パトカー'
str2 = 'タクシー'
print(''.join([i + j for i, j in zip(str1, str2)]))
```
```
パタトクカシーー
```
>与えられた文字列の各文字を，以下の仕様で変換する関数cipherを実装せよ．
英小文字ならば(219 - 文字コード)の文字に置換
その他の文字はそのまま出力  
```python
def cipher(str):
  rep = [chr(219 - ord(x)) if x.islower() else x for x in str]

  return ''.join(rep)

message = 'the quick brown fox jumps over the lazy dog'
message = cipher(message)
print('暗号化:', message)
```
```
暗号化: gsv jfrxp yildm ulc qfnkh levi gsv ozab wlt
```


# 正規表現で使うやつ  
```python
置換後の文字列 = re.sub(正規表現, 置換する文字列, 置換される文字列 [, 置換回数])
```
```python
import re

str = 'Now I need a drink, alcoholic of course, after the heavy lectures involving quantum mechanics.'
str = re.sub('[,\.]', '', str)  # ,と.を除去
print(str)
splits = str.split()  # スペースで区切って単語ごとのリストを作成
ans = [len(i) for i in splits]
print(ans)
```
```
Now I need a drink alcoholic of course after the heavy lectures involving quantum mechanics
[3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9]
```


# 辞書型  
```python

str = 'Hi He Lied Because Boron Could Not Oxidize Fluorine. New Nations Might Also Sign Peace Security Clause. Arthur King Can.'
splits = str.split()  # スペースで区切って単語ごとのリストを作成
ans={}
one_ch=[1, 5, 6, 7, 8, 9, 15, 16, 19]
for i, word in enumerate(splits):
  if i+1 in one_ch:
    ans[word[:1]]=i+1
  else:
    ans[word[:2]]=i+1
print(ans)
```

# 和集合、積集合、差集合
```python
def ngram(n, lst):
    return set(zip(*[lst[i:] for i in range(n)]))

str1="abcde"
str2="defg"

X = ngram(2, str1)
Y = ngram(2, str2)

union = X | Y
intersection = X & Y
difference = X - Y

print('和集合:', union)
print('積集合:', intersection)
print('差集合:', difference)
```
```
和集合: {('d', 'e'), ('e', 'f'), ('a', 'b'), ('c', 'd'), ('f', 'g'), ('b', 'c')}
積集合: {('d', 'e')}
差集合: {('a', 'b'), ('c', 'd'), ('b', 'c')}
```

# その辞書中に目的とするオブジェクトが含まれるかどうかの判定  
```python
def ngram(n, lst):
    return set(zip(*[lst[i:] for i in range(n)]))

str1="abcde"
str2="defg"

X = ngram(2, str1)
Y = ngram(2, str2)

print('Xにcdが含まれるか:', {('c', 'd')} <= X)
print('Yにcdが含まれるか:', {('c', 'd')} <= Y)
```
```
Xにcdが含まれるか: True
Yにcdが含まれるか: False
```

# format
```python
def generate_sentence(x, y, z):
  print(f'{x}時のとき{y}は{z}')

generate_sentence(12, '気温', 22.4)
```
```
12時のとき気温は22.4
```

# 文章の単語を抽出する  
スペースで区切られた単語列から単語を抽出する際に使います。
2行目を丸ごと覚えてください。
`re.sub(a, b, c)`はcのなかにあるaをb日寛する処理を行う。
```python
str = 'Now I need a drink, alcoholic of course, after the heavy lectures involving quantum mechanics. I said "yeah".'
str = re.sub('[,\.\"]', '', str).split() # ,と.を除去
print(str)
```
```
['Now', 'I', 'need', 'a', 'drink', 'alcoholic', 'of', 'course', 'after', 'the', 'heavy', 'lectures', 'involving', 'quantum', 'mechanics', 'I', 'said', 'yeah']
```

# ランダム関数  
## 要素を一つ選択   

`randam,choice(リスト)`

## 要素を複数選択   
`ramdom.sample(リスト, 要素の数)`

# テキストファイルから内容を抽出

↓でファイルを読み込むことができる。
`read_csv()`は区切り文字がカンマ,で`read_table()`は区切り文字がタブ\t。 

↓でファイルに書き出すことができる。
`to_csv()`は区切り文字がカンマ,で`to_table()`は区切り文字がタブ\t。 

[popular-names.txt](https://nlp100.github.io/data/popular-names.txt)を読み込む

```python
import pandas as pd

df = pd.read_table('./popular-names.txt', header=None, sep='\t', names=['name', 'sex', 'number', 'year'])
print(df[:10])
```

```
        name sex  number  year
0       Mary   F    7065  1880
1       Anna   F    2604  1880
2       Emma   F    2003  1880
3  Elizabeth   F    1939  1880
4     Minnie   F    1746  1880
```

特定のタグのデータだけを抜き出すことができる

```python
df['name']
```
```
0            Mary
1            Anna
2            Emma
3       Elizabeth
4          Minnie
          ...    
2775     Benjamin
2776       Elijah
2777        Lucas
2778        Mason
2779        Logan
Name: name, Length: 2780, dtype: object
```

# ビニング処理
機械学習でよく用いられる  
pandasの`cut`, `qcut`を使います。
参考→[pandas の cut、qcut でデータ解析－python](http://ailaby.com/cut_qcut/)


# ファイル内の数値を降順にソート  
`.sort_values()`
()のなかに`by=タグ`でタグの数値を降順で表示する。

# 頻度を確認する  
`.value_counts()`
```python
df['name'].value_counts()
```
で、その名前が出てくる頻度を知ることができる。
```
James      118
William    111
Robert     108
John       108
Mary        92
          ... 
Crystal      1
Rachel       1
Scott        1
Lucas        1
Carolyn      1
Name: name, Length: 136, dtype: int64
```

-----  

# 参考  
[言語処理100本ノック](https://github.com/nlp100/nlp100.github.io)
[Pythonのアットマーク演算子の使い方を現役エンジニアが解説](https://techacademy.jp/magazine/38457)
[loggingでログをとる](https://python.civic-apps.com/category/logging/)
[Pythonで並列処理](https://python.civic-apps.com/category/concurrency/)
[Pythonの同期処理と非同期処理について現役エンジニアが解説](https://techacademy.jp/magazine/39842)
[Pythonの可変長引数（*args, **kwargs）の使い方](https://note.nkmk.me/python-args-kwargs-usage/)
