# -*- coding: utf-8 -*-
'''
左ボタンを押してサーボモータを0~180度、
右ボタンを押して180~0度に回転させるプログラム
'''

import RPi.GPIO as GPIO
import time

PIN_SERVO=23
PIN_A=11
PIN_B=7
ang=0

GPIO.setmode(GPIO.BCM)
GPIO.setup(PIN_SERVO, GPIO.OUT)
GPIO.setup(PIN_A, GPIO.IN) # ボタンは電流が流れるか否かで判断するためinputで判断
GPIO.setup(PIN_B, GPIO.IN)

p = GPIO.PWM(PIN_SERVO, 50)

p.start(2.5)

time.sleep(1.0)

def servo(a):
    dc = 2.5 + (12.0-2.5)/180*a
    p.ChangeDutyCycle(dc)
    time.sleep(0.01)

while True:
     # ループの最初でボタンが押されたか否かで判断
    PIN_A_Value=GPIO.input(PIN_A)
    PIN_B_Value=GPIO.input(PIN_B)

    if(PIN_A_Value==GPIO.LOW and PIN_B_Value==GPIO.LOW): # ボタンが押されてなかったら、何もしない
        pass # 何もしない

    elif(PIN_A_Value==GPIO.HIGH): # ボタンAが押されたとき
        if(ang<180):
            ang+=1
            servo(ang)
        else:
            pass
    
    elif(PIN_B_Value==GPIO.HIGH): # ボタンB が押されたとき
        if(ang>0):
            ang-=1
            servo(ang)
        else:
            pass