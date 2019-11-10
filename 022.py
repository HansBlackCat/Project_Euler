#py3

import re 

f=open("022_names.txt","r")
data=f.read()
rec=re.compile(r"(?=\W*)(?P<name>\w+)(?=\W*)")
a=rec.findall(data)
a.sort()

b=[]
for i in range(0,len(a)):
    a_temp=list(a[i])
    b_temp=0
    for j in a_temp:
        b_temp+=ord(j)-ord('@')
    b.append(b_temp*(i+1))   

sum=0
for i in b:
    sum+=i

print(sum)

f.close()
