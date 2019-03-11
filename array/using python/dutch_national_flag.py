# -*- coding: utf-8 -*-
'''
Created on Thu Feb 14 01:17:42 2019

@author: Vaibhav'''
# =============================================================================
# 
# no_of_testcases=int(input())
# while(no_of_testcases):
#     b=int(input())
#     a=list(map(int,input().split()))
#     l=0
#     m=0
#     h=len(a)-1
#     while(m<=h):
#         if(a[m]==0):
#             temp=a[l]
#             a[l]=a[m]
#             a[m]=temp
#             l=l+1
#             m=m+1
#         elif(a[m]==1):
#             m=m+1
#         else:
#            
#             temp=a[h]
#             a[h]=a[m]
#             a[m]=temp
#             h=h-1
#             
#             
#     for i in a:
#         print(i,end=" ")
#     print("\n")
#     no_of_testcases=no_of_testcases-1            
#     
#     
# =============================================================================
def sort012(a):
    temp=[0]*3
    for i in range(len(a)):
        temp[a[i]]=temp[a[i]]+1
    pos=0
    for i in range(3):
        while(temp[i]>0):
            a[pos]=i
            pos+=1
            temp[i]-=1
        
no_of_testcases=int(input())
while(no_of_testcases):
    b=int(input())
    a=list(map(int,input().split()))
    sort012(a)
    for i in a:
        print(i,end=" ")
    print("\n")
    no_of_testcases=no_of_testcases-1