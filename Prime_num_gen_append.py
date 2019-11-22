#!/usr/bin/env python3

import re

f=open("Prime_num_temp.txt",'r')
rec=re.compile(r"(?P<PRIME>\d+) ")
line=f.read()
arr=rec.findall(line)
Prime_arr=[]
for i in arr: Prime_arr.append(int(i))
f.close()

f=open("Prime_num_temp.txt",'a')

PRIME_INIT=Prime_arr[-1]
PRIME_MAX=PRIME_INIT+10000
for i in range(PRIME_INIT+1,PRIME_MAX):
    prime_temp=0
    for j in Prime_arr:
        if i%j==0: prime_temp+=1
    if prime_temp==0:
        f.write(f"{i} ")

f.close()