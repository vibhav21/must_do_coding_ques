# -*- coding: utf-8 -*-
"""
Created on Wed Feb 13 20:09:09 2019

@author: Vaibhav
"""

arr=[]
a=int(input())

while(a):
    max_s=-32000
    max_t=0
    size=int(input())
    arr=list(map(int,input().split()))
    for i in range(size):
        max_t=max_t+arr[i]
        if(max_s<max_t):
            max_s=max_t
        if(max_t<0):
            max_t=0    
            
    print(max_s)
    a=a-1    
        
    