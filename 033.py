#!/usr/vin/env python3
import re
from fractions import Fraction

def Canc(i):
    A = list(str(arr[i][0]))
    B = list(str(arr[i][1]))
    if int(A[1])==0 or int(B[1])==0:
        return False

    if int(B[1])!=0 and A[0] == B[0]:
        ANS1 = int(A[1]) / int(B[1])
    elif int(B[0])!=0 and A[0] == B[1]:
        ANS1 = int(A[1]) / int(B[0])
    elif int(B[1])!=0 and A[1] == B[0]:
        ANS1 = int(A[0]) / int(B[1])
    elif int(B[0])!=0 and A[1] == B[1]:
        ANS1 = int(A[0]) / int(B[0])
    else: return False

    if ANS1 == arr[i][0] / arr[i][1]:
        return True
    else: return False

arr=[]
ans_arr=[]

for i in range(10,100):
    for j in range(10,i):
        arr.append((j,i))

for i in range(len(arr)):
    if Canc(i):
        ans_arr.append(arr[i])

f=open("Prime_num.txt",'r')
rec=re.compile(r"(?P<PRIME>\d+) ")
line=f.read()
arr=rec.findall(line)
Prime_arr=[]
for i in arr: Prime_arr.append(int(i))
f.close()

Tot_ENM=1
Tot_DNM=1
for i in range(len(ans_arr)):
    Tot_ENM*=ans_arr[i][0]
    Tot_DNM*=ans_arr[i][1]

FRAC=Fraction(Tot_ENM,Tot_DNM)

print(ans_arr)
print((Tot_ENM,Tot_DNM))
print(FRAC)



