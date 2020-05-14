# ver 仮引数アリ ---------------------------------
def calculate_no_return2(variable1, variable2):
    print("variable1 = "+str(a)+", variable2 = "+str(b))
    c=variable1+variable2

    return c

a=2
b=3

d=calculate_no_return2(a, b)

print("d="+str(d))

# ver 仮引数ナシ ---------------------------------
def calculate_no_return1():
    print("a = "+str(a)+", b = "+str(b))
    c=a+b       #cはローカル変数で、この関数外でははんえいされません
    return c

a=2
b=3

d=calculate_no_return1()

print("d="+str(d))

#print("c = "+str(c)) 

'''
課題8
初めに2つの自然数を入力させ、入力された数字が10より大きければ掛算、小さければ足し算をさせる
関数(返り値あり)を
(一つ目)引数ナシ
(二つ目)引数アリ
バージョンで作って、プログラムを作ってください。
'''