#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10010
#define BUMPER 2

void Prime(int n)
{
    int num=0;
    int* arr=(int*) malloc (sizeof(int)*ARRAY_SIZE*BUMPER);
    arr[1]=9;
    for (int i=2; i<1000000; i++)
    {
        int temps=0;
        for (int j=1; j<=num; j++)
        {
            if (i%arr[j]==0) temps++;
        }
        if (temps==0)
        {
            num++;
            arr[num]=i;
            printf("%d %d\n",num,arr[num]);
                
        }
        if (num==n) 
        {
            printf("%d\n", i);
            break;
        }
    }
    free(arr);
}

int main()
{
    int a=0;
    scanf("%d\n", &a);
    Prime(a);
}
