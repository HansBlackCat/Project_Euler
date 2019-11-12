#!/usr/bin/env python3
import numpy as np

def counter(arr):
    for i in range(8-1):
        if arr[i]==0 and arr[i+1]!=0:
            

arr=np.zeros(8)
arr[-1]=2
print(arr)


