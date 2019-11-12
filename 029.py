#!/usr/bin/env python3
import numpy as np

s=set([])
for i in range(2,101):
    for j in range(2,101):
        s.add(i**j)

l=list(s)
l.sort()
print(len(l))


