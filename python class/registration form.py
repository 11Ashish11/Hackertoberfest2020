from tkinter import *

root = Tk()#window

def select():
    selection="Value"+ str(Entry.get())
    lbl.config(text=selection)

L1 = Label(root, text="User Name")
L1.pack( side = LEFT)
E1 = Entry(root, bd =5)
E1.pack(side = RIGHT)



btn=Button(root,text="Register",command=select)
btn.pack(anchor=CENTER)

lbl=Label(root)
lbl.pack(anchor=CENTER)
root.mainloop()