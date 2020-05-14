# -*- coding: utf-8 -*-
'''
複数のLEDを点滅させるプログラム
'''

import RPi.GPIO as GPIO
import time

PINS=[10, 11, 12]

#毎回するおまじない
GPIO.setmode(GPIO.BCM) #GPIOのセットアップをBCMモード
GPIO.setup(PINS,GPIO.OUT) #ピン10, 11, 12を出力するように設定

GPIO.output(PINS,GPIO.HIGH) # ピン10, 11, 12に電流を流す(HIGH)
time.sleep(2)
GPIO.output(PINS,GPIO.LOW)  # ピン10, 11, 12に流れる電流を0にする(LOW)

GPIO.cleanup() # 最後に必ずする作業、これをしないと再度プログラムを実行した時プログラムの実行ができない

'''
第1回
LEDの点滅を3回繰り返すプログラムを作ってください。
LEDが3つのバージョンを作ってください。
'''