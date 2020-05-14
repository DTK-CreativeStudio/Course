# -*- coding: utf-8 -*-
'''
DCモータをPWM(アナログ出力)により操作
'''

import RPi.GPIO as GPIO
import time

PIN_A=16
PIN_B=20

GPIO.setmode(GPIO.BCM)

GPIO.setup([PIN_A, PIN_B], GPIO.OUT)
GPIO.output([PIN_A, PIN_B], GPIO.LOW)

motor = GPIO.PWM(PIN_A, 100) # 周波数を100Hzに設定
motor.start(10) # 回転率を100のうち10に設定(もしこれで動かない、はやすぎる場合は適宜変更してください。)
time.sleep(2)   # 2秒待つ

motor.ChangeDutyCycle(20) # 回転率を20に設定に変更
time.sleep(2)

motor.ChangeDutyCycle(5)
time.sleep(2)

motor.stop() # 「motor」をここで停止初期化
GPIO.cleanup()
quit()       #プログラムを終了するためのコマンド(気分で書いた)

'''
第3回
DCモータが停止→回転(率100％)を3回繰り返すプログラムを作ってください。
'''