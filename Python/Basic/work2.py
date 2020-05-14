'''
課題work2
bmiを計算して痩せ、普通、肥満を判定するプログラムを作ってみましょう。
体重と身長を入力させる画面を作ってください。
bmiの式は自分で調べましょう。
'''

weight=float(input("体重を入力してください: "))
height=float(input("身長を入力してください: "))

bmi=weight/(height/100.0)**2

if bmi<18.5:
    print("BMI="+str(bmi)+"なので、あなたは痩せ型です。")
elif 18.5<=bmi<=25:
    print("BMI="+str(bmi)+"なので、あなたは普通です。")
elif 25<=bmi:
    print("BMI="+str(bmi)+"なので、あなたは肥満型です。")

'''
上のコードではstr(bmi)のところで、小数が13桁ぐらい続くと思うのですが、これだと長すぎだという人は、
str(bmi)をround(bmi,n)にしてもらうと小数第n桁まで表示されます。
'''

print(round(bmi,1))