from tkinter import *

root = Tk()

var1=IntVar()
var2=IntVar()
cb1 = Checkbutton(root,text="Audio",variable=var1,onvalue=1,offvalue=0,height=10,width=10)
cb2= Checkbutton(root,text="Video",variable=var2,onvalue=1,offvalue=0,height=10,width=10)

cb1.pack()
cb2.pack()

root.mainloop()