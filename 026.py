#!/usr/bin/env python3
import re
import numpy as np

def recurr_f(arr,n):
    if arr[n][0]<0: return -1
    m=1
    while True:        
        if m>n: 
            break
        if np.array_equal(arr[n][-m:],arr[n][-2*m:-m]):
            if np.array_equal(arr[n][-3*m:-2*m],arr[n][-m:]):
                break
            else: 
                m+=1
                continue
        else: m+=1
    return m    

arr_c=10000
arr_r=1000
arr=np.array([[0 for i in range(arr_c)] for j in range(arr_r)])
arr[0][0]=-1
arr[1][0]=-1

for d in range(2,arr_r):
    temp=10
    for i in range(1,arr_c):
        div=divmod(temp,d)
        arr[d][i]=div[0]
        temp=div[1]*10
        if div[1]==0: 
            break
    if np.sum(arr[d][-3:-1])==0:
        arr[d][0]=-1

#print(arr[59,:])

for i in range(arr_r):
    if arr[i][0]==-1:
        continue
    arr[i][0]=recurr_f(arr,i)
    print("%d, %d" %(i,arr[i,0]))    

print()
print("%d, %d" %(np.argmax(arr[:,0]),np.max(arr[:,0])))    


"""
k=3
print(arr[7][-2*k:-k])
print(arr[7][-k:])
print(arr[7][0])
print(np.array_equal(arr[7][-2*k:-k],arr[7][-k:]))
print(recurr_f(arr,7))

"""    
