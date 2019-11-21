#py3

import scipy.special as sc
import numpy as np

"""
1,000,000
3,628,800
362,880
40,320
"""
IPT=1000000

i=[]

def Cal(n,m):
	ori=[i for i in range(m)]
	arr=[]
	m_ori=m
	for cnr in range(m_ori):
		for i in range(m):
			if sc.factorial(m-1)*(i) < n <= sc.factorial(m-1)*(i+1):
				np.sort(ori)
				temp=ori[i]
				break
		arr.append(temp)
		ori.remove(temp)
		n=int(n-sc.factorial(m-1)*i)
		m=m-1

	print(n,m)
	print(ori)
	print(i)
	print(arr)
	return 0

Cal(IPT,10)


