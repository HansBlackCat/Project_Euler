#py3

def path_sum(n,m):
    if(n==0|m==0):
        return 1
    else:
        return (arr[n-1][m]+arr[n][m-1])

arr=[[0 for i in range(0,21)] for j in range(0,21)]

for i in range(0,21):
    arr[i][0]=1
    arr[0][i]=1

for i in range(1,21):
    for j in range(1,21):
        arr[i][j]=path_sum(i,j)
        print(f"{i},{j},{arr[i][j]}")


