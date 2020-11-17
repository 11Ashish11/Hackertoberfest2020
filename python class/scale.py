from tkinter import *

root = Tk()#window

var=IntVar()#dynamic value storage

scale=Scale(root,variable=var)#create scale
scale.pack(anchor=CENTER)

def select():
    selection="Value"+ str(var.get())
    lbl.config(text=selection)

btn=Button(root,text="Get the scale value",command=select)
btn.pack(anchor=CENTER)

lbl=Label(root)
lbl.pack(anchor=CENTER)
root.mainloop()