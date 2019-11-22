#!/usr/bin/env python3
import re
import itertools

def tup2int(N):
    ans=''.join(str(i) for i in N)
    return int(ans)

def introt(N):
    leng=len(N)
    N_temp=N.copy()
    M=[]
    M.append(N_temp)
    for i in range(leng-1):
        N.insert(0,N.pop())
        M.append(N.copy())
    return M

f=open("Prime_num.txt",'r')
rec=re.compile(r"(?P<PRIME>\d+) ")
line=f.read()
arr=rec.findall(line)
Prime_arr=[]
for i in arr: Prime_arr.append(i)
f.close()
"""
i=32
print( 
    str(tup2int(list(itertools.permutations(list(str(i))))[0])),
    #list(itertools.permutations(list(str(i)))),
    str(tup2int(list(itertools.permutations(list(str(i))))[0])) in Prime_arr,

)
"""

counter=0
for i in Prime_arr:
    if int(i)>1000000: break
    INDEX=0
    temp=list(i)
    temp2=introt(temp)
    for j in range(len(temp2)):
        if str(tup2int(temp2[j])) not in Prime_arr:
            INDEX=1
            break
    if INDEX!=1:
        counter+=1
        print(i)
print()
print(counter)
print('ENDE')
