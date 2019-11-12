#!/usr/bin/env python3
import numpy as np

def find(arr,m,n):
    a=arr[m-1,n]
    b=arr[m,n-1]
    c=arr[m+1,n]
    d=arr[m,n+1]
    if a!=0 and b==0:
        n-=1
    elif b!=0 and c==0:
        m+=1
    elif c!=0 and d==0:
        n+=1
    elif d!=0 and a==0:
        m-=1
    else:
        n+=1
    return (m,n)

intg=1001
size=(intg,intg)
size_r=size[0]+2
size_c=size[1]+2

mid_r=(size_r//2)
mid_c=(size_c//2)

arr=np.zeros((size_r,size_c))
arr[mid_r,mid_c]=1

m=mid_r
n=mid_c
for i in range(intg**2):
    arr[m,n]=i+1
    temp=find(arr,m,n)
    m=temp[0]
    n=temp[1]

print(arr)
cpy1=0
cpy2=0
for i in range(size_r):
    cpy1+=arr[i,i]
    cpy2+=arr[size_r-1-i,i]

print(cpy1+cpy2-1)    

