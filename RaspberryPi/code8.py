# -*- coding: utf-8 -*-
'''
 サーボモータを0~180度、180~0度に回転させ
 0度のとき、7セグメントディスプレイに1と表示し、led1を点灯する
 90度のとき,7セグメントディスプレイに2と表示し、、led2を点灯する
 180度のとき,7セグメントディスプレイに3と表示し、led3を点灯するプログラム
'''
#このプログラムは処理速度よりコードの短さを優先しています。
import RPi.GPIO as GPIO
import time

# ピン設定-------------------------------------
PIN_SERVO=21    #サーボモータのピン設定

A, B, C, D, E, F, G, DP=14, 15, 18, 23, 24, 25, 8, 7 #7セグのピン設定
seg_pin = [A, B, C, D, E, F, G, DP]

LED1_PIN, LED2_PIN, LED3_PIN=17, 27, 22 #LEDのピン設定
#----------------------------------------------

#GPIOの初期設定--------------------
GPIO.setmode(GPIO.BCM)
GPIO.setup([PIN_SERVO, A, B, C, D, E, F, G, DP, LED1_PIN, LED2_PIN, LED3_PIN], GPIO.OUT)
#---------------------------------

#サーボモータの設定----------------
p = GPIO.PWM(PIN_SERVO, 50)
p.start(0.0)
p.ChangeDutyCycle(2.5)
time.sleep(0.5)
#---------------------------------

def manipulate(number):
    # 一度7セグの表示とLEDを全て消す
    GPIO.output([A, B, C, D, E, F, G, LED1_PIN, LED2_PIN, LED3_PIN], GPIO.LOW)
    if(number==1):      #7セグに1と表示し、led1を点灯
        GPIO.output([B, C, LED1_PIN], GPIO.HIGH)

    elif(number==2):    #7セグに2と表示し、led1とled2を点灯
        GPIO.output([A, B, G, E, D, LED1_PIN, LED2_PIN], GPIO.HIGH)

    else:               #7セグに3と表示し、led1とled2とled3を点灯
        GPIO.output([A, B, G, C, D, LED1_PIN, LED2_PIN, LED3_PIN], GPIO.HIGH)



while True:
    for degree in range(0, 181):
        dc = 2.5 + (12.0-2.5)/180*degree
        p.ChangeDutyCycle(dc)

        if(degree==0):
            manipulate(1)
        elif(degree==90):
            manipulate(2)
        elif(degree==180):
            manipulate(3)
        
        time.sleep(0.01)

    time.sleep(1)

    for degree in range(180, -1, -1):
        dc = 2.5 + (12.0-2.5)/180*degree
        p.ChangeDutyCycle(dc)
        
        if(degree==180):
            manipulate(1)
        elif(degree==90):
            manipulate(2)
        elif(degree==0):
            manipulate(3)

        time.sleep(0.01)

    time.sleep(1)
