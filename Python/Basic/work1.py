'''
課題work1
a=25, b=12として、aを2乗したものにbを5回かけた値を出力するプログラムを作成しよう。

この問題はいろいろな書き方があります。下の結果はすべて同じです。
'''

a=25
b=12

c=a*a+b+b+b+b+b  #aを2回かけて、bを5回足す
print(c)
d=a*a+5*b        #aを2回かけて、bに5をかける。
print(d)
print(a**2+5*b)  #aの2乗を行い、bに5をかける。その式を直接print()関数に入れてやっても、
                 #しっかりと表示してくれる。'x**n'でxのn上を意味する。