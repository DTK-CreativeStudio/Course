# -*- coding: utf-8 -*-
'''
LEDをゆっくり点灯させ、ゆっくり消灯させるプログラム
'''

import RPi.GPIO as GPIO
import time

PIN = 10

# おまじない
GPIO.setmode(GPIO.BCM)
GPIO.setup(PIN, GPIO.OUT)

led = GPIO.PWM(PIN, 50) #50Hzで制御
led.start(0) # LEDに流す電流0

for i in range(0,101, 1):
    led.ChangeDutyCycle(i) # ledに流す電流の大きさをiに変化
    time.sleep(0.01)

time.sleep(2)

for i in range(100, -1, -1):
    led.ChangeDutyCycle(i) # ledに流す電流の大きさをiに変化
    time.sleep(0.01)

led.stop() # アナログ制御をストップ
GPIO.cleanup()

'''
課題2
100Hzで制御し、これと同じテンポで点滅を3回繰り返すプログラムを作ってください。
なお、LEDは3つ、ChangeDutyCycle()の関数処理にかかる時間は0とします。
'''