# -*- coding: utf-8 -*-
'''
7セグメントディスプレイに0と表示するプログラム
'''

import RPi.GPIO as GPIO             #GPIO用のモジュールをインポート
import time                         #時間制御用のモジュールをインポート

seg_pin = [14, 15, 18, 23, 24, 25, 8, 7]
           #A,  B,  C,  D,  E,  F,  G, DP

GPIO.setmode(GPIO.BCM)
GPIO.setup(seg_pin, GPIO.OUT)

#7セグで"3"を表示するためのポート
seg_3 = [14, 15, 18, 23, 8, 25]
         #A,  B,  C,  D,  G,  F

#GPIOの電圧を制御
GPIO.output(seg_3, GPIO.HIGH)
time.sleep(5)
GPIO.output(seg_3, GPIO.LOW)

#GPIOをクリーンアップ
GPIO.cleanup()


'''
第6回
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, ...と一秒ごとに数字を表示するプログラムを作ってください。
'''

