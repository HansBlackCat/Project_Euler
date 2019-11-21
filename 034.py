#!/usr/bin/env python3
import scipy.special

def Digit_F(N):
    arr=list(str(N))
    arr=[int(i) for i in arr]
    each_sum=0
    for i in arr:
        each_sum+=scipy.special.factorial(i)

    if each_sum==N:
        return True
    else:
        return False

ans_arr=[]
for i in range(3,10**8):
    if Digit_F(i):
        ans_arr.append(i)

print(ans_arr)
print(sum(ans_arr))
