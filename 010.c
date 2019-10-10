/*Summation of Primes*/
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 2000000
#define BUMPER 2
#define LOOP_SIZE 50000000

int main()
{
    long long int sum=0;
    int num=0;
    int* arr=(int*) malloc(sizeof(int)*ARRAY_SIZE*BUMPER);
    arr[1]=9;
    for (int i=2; i<LOOP_SIZE; i++)
    {
        int temp=0;
        if(i>2000000)
        {
            printf("ENDE\nSum: %lld\n", sum);
            break;
        }
        for (int j=1; j<=num; j++) //Prime checker
        {
            if (i%arr[j]==0)
            {
                temp++;
            }
        }
        if(temp==0) //Allocating prime number
        {
            num++;
            arr[num]=i;
            sum+=i;
            printf("%d %d %lld\n",num,arr[num],sum);
        }
        //else printf("K\n");
    }
    free(arr);
}
