#!/usr/bin/env python3


"""
1. raw int
1-1. chg2 deci->bin
1-2. erase [0][1] ==0, b 
2. pop & insert
3. == compare
"""
ans_arr=[]
for i in range(1000000):
    deci_arr=list(str(i))
    deci_arr_t=deci_arr.copy()
    deci_rev=[]
    for k in range(len(deci_arr)):
        deci_rev.append(deci_arr_t.pop())
    if deci_rev!=deci_arr:
        continue

    i_temp=bin(i)
    bin_list=list(i_temp)
    del bin_list[0], bin_list[0]
    list_temp = bin_list.copy()
    list_rev=[]
    for j in range(len(bin_list)):
        list_rev.append(list_temp.pop())
    if list_rev==bin_list:
        ans_arr.append(i)
ans_sum=sum(ans_arr)

print(ans_arr)
print(ans_sum)
print('Ende')
