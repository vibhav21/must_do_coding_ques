# -*- coding: utf-8 -*-
"""
Created on Wed Feb 13 22:44:53 2019

@author: Vaibhav
"""

#code
a=int(input())
while(a):
    Sum=0
    q=0
    size=int(input())
    Sum1=(size*(size+1))/2
    arr=list(map(int,input().split()))
    for i in arr:
        Sum=Sum+i
        
    q=Sum1-Sum
    print(int(q))    
    a=a-1
