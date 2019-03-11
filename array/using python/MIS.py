# -*- coding: utf-8 -*-
"""
Created on Tue Feb 19 20:05:46 2019

@author: Vaibhav
"""
# =============================================================================
# def MIS(array,temp,size):
#     for i in range(1,size):
#         for j in range(0,i):
#             if(array[j]<array[i]):
#                 temp[i]=max(temp[i],temp[j]+array[i])
#     return max(temp)            
#         
# def main():
#     a=int(input())
#     while(a):
#         size=int(input())
#         array=list(map(int,input().split()))
#         temp=[array[i] for i in range(len(array))]
#         print(MIS(array,temp,size))
#         a=a-1
#         
# if __name__=='__main__':
#     main();
#     
# =============================================================================
sums = {0:0}
def max_asc(numbers):
    
    for n in numbers:
        min_val = sums.get(n, 0)
        print(min_val)
        print(sums)
        a=[v for k,v in sums.items() if k < n]
        print(a)
        top = max([v for k,v in sums.items() if k < n]) + n
        if top > min_val:
            sums[n] = top
        
    return max(sums.values())
        

for n in range(int(input())):
    input()
    numbers = [int(n) for n in input().split(' ') if n != '']
    print(max_asc(numbers))