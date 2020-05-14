# -*- coding: utf-8 -*-
'''
第3回
DCモータが正転→停止→反転→停止を3回繰り返すプログラムを作ってください。
'''

import RPi.GPIO as GPIO
import time

PIN_A=14
PIN_B=15

GPIO.setmode(GPIO.BCM)

GPIO.setup([PIN_A, PIN_B], GPIO.OUT)
GPIO.output([PIN_A, PIN_B], GPIO.LOW)

motor_A = GPIO.PWM(PIN_A, 100)
motor_B = GPIO.PWM(PIN_B, 100)

motor_A.start(0)
motor_B.start(0)

for i in range(3):
    motor_A.ChangeDutyCycle(10)
    time.sleep(2)

    motor_A.ChangeDutyCycle(0)
    time.sleep(1)

    motor_B.ChangeDutyCycle(10)
    time.sleep(2)

    motor_B.ChangeDutyCycle(0)
    time.sleep(1)


motor_A.stop()
motor_B.stop()
GPIO.cleanup()
quit()