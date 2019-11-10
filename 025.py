#py3

import numpy as np
MAX=10000000
MATMAX=1000

pow_ind=pow(10,1000)
fib_arr=np.array([[0 for i in range(MATMAX)]for j in range(3)])
fib_arr[0][0]=1
fib_arr[1][0]=1

for i in range(3,MAX):
    fib_arr[2]=fib_arr[0]+fib_arr[1] 
    for j in range(MATMAX):
        if fib_arr[2][j]>=10:
            fib_arr[2][j+1]+=1
            fib_arr[2][j]-=10
    if fib_arr[2][MATMAX-1]>0: 
        print("ENDE")
        print(f"# is {i}")
        break
    fib_arr[0]=fib_arr[1]
    fib_arr[1]=fib_arr[2]

for i in range(MATMAX):
    if fib_arr[2][MATMAX-1-i]==0: continue
    else:
        print(f"{fib_arr[2][MATMAX-1-i]}",end='')
print()

