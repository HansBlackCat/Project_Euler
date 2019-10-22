#include <stdio.h>
#include <stdlib.h>
#include <math.h> //-lm
#define FACTORIAL_MAX 100
#define JUMP_FAC 10000000000

int main()
{
    long int arr[100]={0};
    arr[0]=1;
    for(int i=1; i<=FACTORIAL_MAX; i++)
    {
        for(int j=0; j<100; j++)
        {
            arr[j]*=i;
        }
        for(int j=0; j<100; j++)
        {
            if(arr[99]>=JUMP_FAC) printf("MAX_REACH_ERROR\n");
            if(arr[j]>=JUMP_FAC)
            {
                arr[j+1]+=arr[j]/JUMP_FAC;
                arr[j]=arr[j]%JUMP_FAC;
            }
        }
    }
    for(int j=0; j<100; j++)
    {
        if(arr[99-j]!=0) printf("%ld ",arr[99-j]);
    }
    printf("\n");
    int sum=0;
    for(int k=0; k<99; k++)
    {
        for(int h=0; h<10; h++)
        {
            sum+=arr[k]/(int)pow(10,h)%10;
        }
    }
    printf("%d\n", sum);
}
