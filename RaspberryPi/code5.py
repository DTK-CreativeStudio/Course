# -*- coding: utf-8 -*-
'''
HC-SR04を使用した距離の測定を行うプログラム
'''
import RPi.GPIO as GPIO
import time

def distance(): # 

  TRIG = 23
  ECHO = 25
  
  GPIO.setmode(GPIO.BCM)
  GPIO.setup(TRIG,GPIO.OUT)   # TRIGを出力に設定
  GPIO.setup(ECHO,GPIO.IN)    # ECHOを入力に設定

  GPIO.output(TRIG, GPIO.LOW) # TRIGの出力をLOWに設定
  time.sleep(0.3)
  
  GPIO.output(TRIG, GPIO.HIGH) #HIGHにして 
  time.sleep(0.00001)
  GPIO.output(TRIG, GPIO.LOW)  # LOWにする

  while GPIO.input(ECHO) == 0:
    signaloff = time.time()
    
  while GPIO.input(ECHO) == 1:
    signalon = time.time()

  timepassed = signalon - signaloff
  distance = timepassed * 17000
  return distance

         
print(distance())
GPIO.cleanup()