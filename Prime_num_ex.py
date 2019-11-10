"""
Prime number -> list
Read all pnum data in Prime_num.txt & convert list
"""
import re

f=open("Prime_num.txt",'r')
rec=re.compile(r"(?P<PRIME>\d+) ")
line=f.read()
arr=rec.findall(line)
Prime_arr=[]
for i in arr: Prime_arr.append(int(i))
f.close()


