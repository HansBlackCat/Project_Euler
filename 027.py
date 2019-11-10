#py3

f=open("Prime_num.txt",'w')

PRIME_MAX=10000000
prime_ser=[2]
f.write(f"2 ")
for i in range(3,PRIME_MAX):
    prime_temp=0
    for j in prime_ser:
        if i%j==0: prime_temp+=1
    if prime_temp==0: 
        prime_ser.append(i)    
        f.write(f"{i} ")

f.close()

"""
temp=0
poly_ser=[-1 for i in range(temp_range)]
for i in range(0,40):
    poly_ser[i]=i**2+i+41
    for j in prime_ser:
        if j>=poly_ser[i]: 
            break
        elif poly_ser[i]%j==0:
            print(f"{i}, {j}")
"""



