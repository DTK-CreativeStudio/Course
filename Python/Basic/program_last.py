class Class1():
    pass             # 処理がない場合はこれを書く

instance0=Class1()   #インスタンスの作成

print(type(instance0))

#------------------------------------------
class Class2():
    def __init__(self, content, times):
        self.message = content          #表示する文字列
        self.value = times              #文字列の後ろに表示する！の回数

instance1 = Class2("Hello World", 2)

print(instance1.message+"!"*instance1.value)

#------------------------------------------
class Class3():
     
    def __init__(self, a,b,c):
        self.num1 = a
        self.num2 = b
        self.num3 = c
 
    def calculate(self):
        result = self.num1+self.num2+self.num3  # インスタンス変数a, b, cそれぞれを足した値をresultに代入
        print(result)
 
instance2 = Class3(1,2,3)
instance2.calculate()       # 1+2+3の計算結果である6を表示

#------------------------------------------
class Class3():
     
    def __init__(self, a,b,c):
        self.num1 = a
        self.num2 = b
        self.num3 = c
 
    def calculate(self):
        result = self.num1+self.num2+self.num3  # インスタンス変数a, b, cそれぞれを足した値をresultに代入
        return result
 
instance2 = Class3(1,2,3)
a=instance2.calculate()       # 1+2+3の計算結果である6を代入
print(a)
#------------------------------------------
class Parent():
    def parent_func(self):
        print("PARENT")
         
class Child(Parent):
    def child_func(self):
        print("CHILD")
 
k = Child()
 
k.parent_func()
k.child_func()

