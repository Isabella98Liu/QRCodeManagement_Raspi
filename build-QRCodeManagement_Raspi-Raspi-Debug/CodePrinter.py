# -*- coding: utf-8 -*
import serial
import sys
import qrcode
#import numpy as np
import numpy
import time

def PrintCode(data):
    ser = serial.Serial('/dev/ttyUSB0',19200)
    if ser.isOpen() == False:
        ser.open()
    print('printer has been open')
    qr = qrcode.QRCode(
        version = 1,
        error_correction = qrcode.constants.ERROR_CORRECT_L,
        box_size=1,
        border=0
    )
    qr.add_data(data)
    qr.make(fit=True)
    img = qr.make_image()
    #img.save("/home/pi/Desktop/1.png")
    img2=numpy.array(img.convert('L'))
    #d={True:int(1),False:int(0)}
    rows,cols=img2.shape
    ser.write("\x1b\x40\x0d".encode('utf-8'))
    time.sleep(0.25)
    for i in range(rows):
        time.sleep(0.20)
        a = ''
        #time.sleep(0.25)
        ser.write("\x1b\x31\x00\x1b\x55\x03\x1b\x56\x02".encode('utf-8'))
##        ser.write("\x1b\x6c\x04".encode('utf-8'))
        for j in range(cols):
            if img2[i,j] == 255:
                ser.write("\x1b\x69\x00".encode('utf-8'))
                a += '█'
            else:
                ser.write("\x1b\x69\x01".encode('utf-8'))
                a += ' '
            ser.write("\x20".encode('utf-8'))
        ser.write("\x0d\x0a".encode('utf-8'))
        print(a)
    #print("\x1b\x40\x0a".encode('utf-8'))
    #a = list(range(0,115))
    #for i in range(0,14):
        #ser.write("\x1b\x4b\x75\x00".encode('utf-8'))
        #for j in range(0,115):
            #a[j] = 0
            #for k in range(0,8):
                #b = pow(2,7-k)
                #a[j] += d[img2[i*8+k,j]]*pow(2,7-k)
            #print(a[j].to_bytes(1,byteorder='little'))
            #ser.write(a[j].to_bytes(1,byteorder='little'))
    ser.write("\x1b\x4a\x03".encode('utf-8'))
    
data = sys.argv[1];
PrintCode(data)