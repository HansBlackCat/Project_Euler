#!/usr/bin/env python3
"""
Prime number -> list
Read all pnum data in Prime_num.txt & convert list
"""
import re

f=open("Prime_num.txt",'r')
rec=re.compile(r"(?P<PRIME>\d+) ")
line=f.read()
arr=rec.findall(line)
Prime_arr=[]
for i in arr: Prime_arr.append(int(i))
f.close()

arr=[]
arr_prime=[]
for i in range(80):
    arr.append(i**2-79*i+1601)
    for j in Prime_arr:
        if j>=arr[i]: break
        if arr[i]%j==0:
            print('ck')            

print("hello")
