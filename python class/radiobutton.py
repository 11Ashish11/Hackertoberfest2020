#RadioButton
from tkinter import *

root=Tk()

#create a radio button

def select():
    msg="Your selected option is"+str(var.get())
    lbl.config(text=msg)

var=IntVar()
rdl=Radiobutton(root,text="Optiion 1",variable=var,value=1,command=select)
rdl.pack(anchor=W)

rdl=Radiobutton(root,text="Optiion 2",variable=var,value=2,command=select)
rdl.pack(anchor=W)

rdl=Radiobutton(root,text="Optiion 3",variable=var,value=3,command=select)
rdl.pack(anchor=W)

lbl=Label(root)
lbl.pack(anchor=W)

root.mainloop()