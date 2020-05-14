
list_a=[1, 2, 3, 4]     #このようにして一つの変数に複数の数値を代入していきます。

#list_a=list(range(1, 5))       #これでも代入できます。
# #for a in range(n, m)でaの値は、n, n+1, n+2, ... ,m-1をとります。

print(list_a)
print("list_a[0] = "+str(list_a[0]))    #リストに代入された数字の最初の文字を表示
print("list_a[1] = "+str(list_a[1]))    #リストに代入された数字の2つ目の文字を表示

aaa=list_a[0]    #リストに代入された数字の最初の文字を代入
print("aaa = "+str(aaa))


#↓このようにしてもリストに代入ができます。
list_b=[]           #初めにlist_bがリストであることを宣言
list_b.append(5)    #リスト名.append(追加する数字、文字(列))で書く
list_b.append(6)
list_b.append(7)
list_b.append(8)
list_b.append(9)
print(list_b)

#上のようにその都度.append()を書くのが非効率な場合
x=[]
for a in range(3):      #ループ処理中で数値を入力させて、リストに追加
    b=int(input("自然数を入力してください: "))
    x.append(b)
    #x.append(int(input("自然数を入力してください: "))) #これでも可
print(x)


# ちなみに文字列はリスト形式で代入されてます。
a="Hello"
for i in range(5):
    print(a[i])


# for a in range(n, m)でaの値は、n, n+1, n+2, ... ,mをとります。下の課題で使えます。


'''
課題work6
フィボナッチ数列の10番目までの数を表示するプログラムをwhile, forでそれぞれ作ってみてください。
いないとは思いますが、フィボナッチ数列がわからない方は、自分で調べてください。
'''