# -*- coding: utf-8 -*-
'''
課題6
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, ...と一秒ごとに数字を表示するプログラムを作ってください。
'''

import RPi.GPIO as GPIO             #GPIO用のモジュールをインポート
import time                         #時間制御用のモジュールをインポート

seg_pin = [14, 15, 18, 23, 24, 25, 8, 7]
A,  B,  C,  D,  E,  F,  G, DP=14, 15, 18, 23, 24, 25, 8, 7
# ここでは少しcode6と異なるアプローチをとっています

GPIO.setmode(GPIO.BCM)
GPIO.setup(seg_pin, GPIO.OUT)

seg=[]
seg.append([A,F,E,D,C,B])   # 0
seg.append([B,C])           # 1
seg.append([A,B,G,E,D])     # 2
seg.append([A,B,G,C,D])     # 3
seg.append([F,G,B,C])       # 4
seg.append([F,G,C,D,A])     # 5
seg.append([A,F,E,D,C,G])   # 6
seg.append([A,B,C])         # 7
seg.append([A,B,C,D,E,F,G]) # 8
seg.append([A,F,G,B,C])     # 9

i=0
while True:
    GPIO.output(seg[i], GPIO.HIGH)
    time.sleep(1)
    GPIO.output(seg[i], GPIO.LOW)
    i+=1
    i=i%10

#GPIOをクリーンアップ
GPIO.cleanup()