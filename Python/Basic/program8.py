# ver 仮引数アリ ---------------------------------
def calculate1(var1, var2):
    print("var1 = "+str(var1)+", var2 = "+str(var2))
    c=var1+var2
    print(c)

a=2
b=3
c=4
calculate1(a, b)
calculate1(b, c)

# ver 仮引数ナシ ---------------------------------
def calculate2():
    print("a = "+str(a)+", b = "+str(b))
    c=a+b       #cはローカル変数で、この関数外では反映されません
    print(c)

a=2
b=3

calculate2()

#print("c = "+str(c)) 

'''
課題8
初めに2つの自然数を入力させ、入力された数字が10より大きければ掛算、小さければ足し算をさせる
関数を
(一つ目)引数ナシ
(二つ目)引数アリ
バージョンで作って、プログラムを作ってください。
'''