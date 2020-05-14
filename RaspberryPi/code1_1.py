# -*- coding: utf-8 -*-
'''
１つのLEDを点滅させるプログラム
'''

import RPi.GPIO as GPIO
import time

PIN=10

#毎回するおまじない
GPIO.setmode(GPIO.BCM) #GPIOのセットアップをBCMモード
GPIO.setup(PIN,GPIO.OUT) #ピン10を出力するように設定

GPIO.output(PIN,GPIO.HIGH) # ピン10に電流を流す(HIGH)
time.sleep(2)              # 2秒待つ
GPIO.output(PIN,GPIO.LOW)  # ピン10に流れる電流を0にする(LOW)

GPIO.cleanup() # 最後に必ずする作業、これをしないと再度プログラムを実行した時プログラムの実行ができない


#------
# code1_2.pyへ進んで下さい。