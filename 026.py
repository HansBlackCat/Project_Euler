#py3
import re

arr_c=100
arr_r=1000
arr=[[0 for i in range(arr_c)] for j in range(arr_r)]

for d in range(2,arr_r):
    temp=10
    for i in range(1,arr_c):
        div=divmod(temp,d)
        arr[d][i]=div[0]
        temp=div[1]*10
        if div[1]==0: break
       
recr=[[0,0] for i in range(arr_r)]       
arg_d=0;
#rec=re.compile(r"(7689)")
#print(rec.search("76897689"))


for d in range(arr_r):
    if arr[d][arr_c-1]&arr[d][arr_c-2]&arr[d][arr_c-3]==0: continue
    else:
        recr[arg_d][0]==d
        arg_d++


for d in range(10): print(f"#{arr_r-d} is {arr[arr_r-d]}")
