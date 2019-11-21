#!/usr/bin/env python3
import itertools
import numpy as np
import pandas as pd

def tup2str(tup):
	ans=''.join(str(i) for i in tup)
	return int(ans)

arr=list(itertools.permutations([i for i in range(1,10)]))

ans_list=[]
for i in range(len(arr)):
	# 1*3==5
	if tup2str(arr[i][:1]) * tup2str(arr[i][1:4]) == tup2str(arr[i][4:]):
		ans_list.append(tup2str((arr[i][4:])))
	# 1*4==4
	if tup2str(arr[i][:1]) * tup2str(arr[i][1:5]) == tup2str(arr[i][5:]):
		ans_list.append(tup2str((arr[i][5:])))
	# 2*2==5
	if tup2str(arr[i][:2]) * tup2str(arr[i][2:4]) == tup2str(arr[i][4:]):
		ans_list.append(tup2str((arr[i][4:])))
	# 2*3==4
	if tup2str(arr[i][:2]) * tup2str(arr[i][2:5]) == tup2str(arr[i][5:]):
		ans_list.append(tup2str((arr[i][5:])))

temp=set(ans_list)
ans_list=list(temp)
print(sum(ans_list))


