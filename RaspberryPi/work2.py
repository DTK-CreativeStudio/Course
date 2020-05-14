# -*- coding: utf-8 -*-
'''
課題2
100Hzで制御し、これと同じテンポで点滅を3回繰り返すプログラムを作ってください。
なお、LEDは3つ、ChangeDutyCycle()の関数処理にかかる時間は0とします。
'''

import RPi.GPIO as GPIO
import time

PINS = [10, 11, 12]

GPIO.setmode(GPIO.BCM)
GPIO.setup(PINS, GPIO.OUT)

led1 = GPIO.PWM(10, 100) #50Hzで制御
led2 = GPIO.PWM(11, 100) #50Hzで制御
led3 = GPIO.PWM(12, 100) #50Hzで制御

led1.start(0)
led2.start(0)
led3.start(0)
for i in range(3):
    for i in range(0,101,1):
        led1.ChangeDutyCycle(i)
        led2.ChangeDutyCycle(i)
        led3.ChangeDutyCycle(i)
        time.sleep(0.02)

    time.sleep(2)

    for i in range(100,-1,-1):
        led1.ChangeDutyCycle(i)
        led2.ChangeDutyCycle(i)
        led3.ChangeDutyCycle(i)
        time.sleep(0.02)

    time.sleep(2)

led.stop()
GPIO.cleanup()
