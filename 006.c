#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10010

void Prime(int n)
{
    int num=0;
    //int* arr=(int*) malloc (sizeof(int)*
    for (int i=2; i<1000000; i++)
    {
        int temps=0;
        for (int j=2; j<i; j++)
        {
            if (i%j==0) temps++;
        }
        if (temps==0)
        {
            num++;

            printf("%d %d\n",num, i);
                
        }
        if (num==n) 
        {
            printf("%d\n", i);
            break;
        }
    }
}

int main()
{
    int a=0;
    scanf("%d\n", &a);
    Prime(a);
}
