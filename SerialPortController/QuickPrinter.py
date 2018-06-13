#---------------------------------------------------------------------------
#【Last Update】6/13/2018
#【Function】 
#   1. Print the given information using a thermal printer connected to Raspi via serial port
#【Notification】
#   1. The test environment is Raspberry Pi 3 Model B+ with Raspbian OS
#---------------------------------------------------------------------------

from tkinter import *
import serial
import sys
import time

ser = serial.Serial('/dev/ttyUSB0',19200)

class Printer:
    def __init__(self,master):
        frame = Frame(master)
        frame.pack()
        Label(frame,text='content:').grid(row=0,column=0)
        self.content = StringVar()
        content = Entry(frame,textvariable=self.content).grid(row=0,column=1)
        print = Button(frame,text='print',command=self.convert)
        print.grid(row=1)
        #frame.columnconfigure(1,weight=1)

    def convert(self):
        ser.write("\x1b\x40".encode('utf-8'))
        ser.write("\x1d\x6b\x02".encode('utf-8'))
        ser.write(self.content.get().encode('utf-8'))
        ser.write("\x00\x0a\x1c\x26".encode('utf-8'))
        ser.write(self.content.get().encode('gb2312'))
        ser.write("\x0a\x0a\x1d\x56\x41\x03".encode('utf-8'))

root2 = Tk()
root2.wm_title('Printer')
size = '%dx%d+%d+%d'%(220,60,(root2.winfo_screenwidth()-200)/2,(root2.winfo_screenheight()-260)/2)
root2.geometry(size)
root2.maxsize(220,60)
root2.minsize(220,60)
printer = Printer(root2)
root2.mainloop()