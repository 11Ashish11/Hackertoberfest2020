#RadioButton
from tkinter import *

root=Tk()

#create a radio button

def select():
    msg="Your Highest Qualifictaion is "+str(var.get())
    lbl.config(text=msg)

var=IntVar()
rdl=Radiobutton(root,text="Engineer",variable=var,value=1,command=select)
rdl.pack(anchor=W)

rdl=Radiobutton(root,text="Doctor",variable=var,value=2,command=select)
rdl.pack(anchor=W)

rdl=Radiobutton(root,text="Sweeper",variable=var,value=3,command=select)
rdl.pack(anchor=W)

lbl=Label(root)
lbl.pack(anchor=W)

def helloCallBack():
       tkMessageBox.showinfo( "Hello ", "How are You")

B = Tkinter.Button(top, text ="Hello", command = helloCallBack)
B.pack()

root.mainloop()