# -*- coding: utf-8 -*-
'''
サーボモータを0度から180度まで動かすプログラム
'''

import RPi.GPIO as GPIO
import time

PIN=23

GPIO.setmode(GPIO.BCM)
GPIO.setup(PIN, GPIO.OUT)

p = GPIO.PWM(PIN, 50) # 周波数50に設定

p.start(2.5) # 2.5(0度)に設定

time.sleep(1.0)

for degree in range(0, 181):         # 0~180度まで角度変更
    dc = 2.5 + (12.0-2.5)/180*degree # ここで角度から、DutyCircle比に変更
    p.ChangeDutyCycle(dc)            # 比をdcに設定
    time.sleep(0.01)

p.ChangeDutyCycle(0.0) # DutyCycle0%にする
