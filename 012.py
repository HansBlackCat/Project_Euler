#py3
import math as ma

def div_c(n):
    temp=0
    for i in range(1,(int)(ma.sqrt(n))+1):
        if(n%i==0):
            temp+=1
    temp=2*temp 
    if ma.sqrt(n)%1==0: temp-=1

    return temp

def tri_num(n):
    temp=0
    for i in range(0,n):
        temp+=i
    return temp+n

"""
arr=[2]
for j in range(3,10000):
    temp=0
    for i in arr:
        if j%i==0:
            temp+=1
    if temp==0:
        arr.append(j)
"""

n=1
while True:
    print("#%d: %d" %(tri_num(n),div_c(tri_num(n))))
    if div_c(tri_num(n))>=500: break
    n+=1
