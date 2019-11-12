#!/usr/bin/env python3

ind_MAX=9**5+9**5+9**5+9**5

tot=0
for a in range(2,ind_MAX):
    l=list(f"{a}")
    sum=0
    for i in l:
        sum+=int(i)**5
    if a==sum:
        tot+=a

print(tot)


