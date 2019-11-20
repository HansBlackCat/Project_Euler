#!/usr/bin/env python3
import numpy as np

def Noc(ipt):
	opt=[]
	for x in ipt:
		if x not in opt:
			opt.append(x)
	return opt

a=[i+1 for i in range(9)]

order1=[str(n)+str(m) for n in a for m in a]
order2=Noc(order1)
print(order2)

