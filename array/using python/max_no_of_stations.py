# -*- coding: utf-8 -*-
"""
Created on Wed Feb 20 13:00:19 2019

@author: Vaibhav
"""
for n in range(int(input())):
    input()
    a=[int(i) for i in input().split() if i!='']
    b=[int(i) for i in input().split() if i!='']
    a.sort()
    b.sort()
    train={}
    for i in a:
        train[i]='a'
    for j in b:
        train[j]='d'
    Max=0
    station_needed =0
    for key in sorted(train.keys()):
        if(train[key]=='a'):
            station_needed=station_needed+1
            if(station_needed>Max):
                Max=station_needed
        if(train[key]=='d'):
            station_needed=station_needed-1
    print(Max)        