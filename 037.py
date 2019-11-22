#!/usr/bin/env python3

import re

f=open("Prime_num.txt",'r')
rec=re.compile(r"(?P<PRIME>\d+) ")
line=f.read()
arr=rec.findall(line)
Prime_arr=[]
for i in arr: Prime_arr.append(int(i))
f.close()

def Trunc_P(n, Prime_arr):
    #N is int
    if n in [2,3,5,7]:
        return True

    if n not in Prime_arr:
        return False
    else:
        arr=list(str(n))
        del arr[0]
        temp=int(''.join(arr))
    return Trunc_P(temp,Prime_arr)

def Trunc_P_R(n, Prime_arr):
    #N is int
    if n in [2,3,5,7]:
        return True

    if n not in Prime_arr:
        return False
    else:
        arr=list(str(n))
        del arr[-1]
        temp=int(''.join(arr))
    return Trunc_P_R(temp,Prime_arr)

indexer=4
cnt=0
ans_arr=[]
while cnt<11:
    if Trunc_P(Prime_arr[indexer],Prime_arr) and Trunc_P_R(Prime_arr[indexer],Prime_arr):
        ans_arr.append(Prime_arr[indexer])
        cnt+=1
    indexer+=1

print(sum(ans_arr))
