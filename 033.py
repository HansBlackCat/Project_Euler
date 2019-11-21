#!/usr/vin/env python3

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


print(ans_arr)



#print(arr)