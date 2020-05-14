# -*- coding: utf-8 -*-
'''
第1回
LEDの点滅を3回繰り返すプログラムを作ってください。
LEDが3つのバージョンを作ってください。
'''

import RPi.GPIO as GPIO
import time

PINS=[10, 11, 12]

#毎回するおまじない
GPIO.setmode(GPIO.BCM)
GPIO.setup(PINS,GPIO.OUT)

for x in range(3):
    GPIO.output(PINS,GPIO.HIGH) # ピン10, 11, 12に電流を流す(HIGH)
    time.sleep(2)
    GPIO.output(PINS,GPIO.LOW)  # ピン10, 11, 12に流れる電流を0にする(LOW)
    time.sleep(2)
GPIO.cleanup()
