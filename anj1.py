# -*- coding: utf-8 -*-
"""
Created on Sun Aug 30 20:32:31 2020

@author: ANJALI
"""

a='12345'
for i in range(5):
    for j in range(5):
        if((i==j)or(i+j==4)):
            print(a[i],end=" ")
        else:
            print(" ",end=" ")
            
    print()
